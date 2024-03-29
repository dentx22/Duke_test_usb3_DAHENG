#include "mainwindow.h"
#include "graycodes.h"
#include "set.h"
#include "ui_mainwindow.h"



#include <QMenu>
#include <QImage>
#include <QKeySequence>
#include <QToolBar>
#include <QMessageBox>
#include <QFileDialog>
#include <QDesktopWidget>
#include <QVector>

//const HV_RESOLUTION Resolution = RES_MODE0;
//const HV_SNAP_MODE SnapMode = CONTINUATION;
//const HV_BAYER_CONVERT_TYPE ConvertType = BAYER2RGB_NEIGHBOUR1;
//const HV_SNAP_SPEED SnapSpeed = HIGH_SPEED;
//const long ADCLevel           = ADC_LEVEL2;
const int XStart              = 0;//图像左上角点在相机幅面1280X1024上相对于幅面左上角点坐标
const int YStart              = 0;
int Width;//相机视野
int Height;
int scanWidth;//扫描区域
int scanHeight;
bool inEnglish = true;

int nowProgress = 0;//进度条初始化

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createConnections();

    saveCon = 1;//Save calib images start with 1
    cameraOpened = false;
    isConfigured = false;
    isProjectorOpened = true;

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(readframe()));

    displayModel = new GLWidget(ui->displayWidget);
    ui->displayLayout->addWidget(displayModel);

    setDialog = new Set(this);//Initialize the set dialog
    getSetInfo();

    cameraWidth = Width;
    cameraHeight = Height;

    getScreenGeometry();//Get mian screen and projector screen geometry
    QDesktopWidget* desktopWidget = QApplication::desktop();
    QRect projRect = desktopWidget->screenGeometry(1);//1 represent projector
    int xOffSet = (projRect.width() - scanWidth)/2 + screenWidth;
    int yOffSet = (projRect.height() - scanHeight)/2;

    pj = new Projector(NULL, scanWidth, scanHeight, projectorWidth, projectorHeight, xOffSet, yOffSet);//Initialize the projector
    pj->move(screenWidth,0);//make the window displayed by the projector
    pj->showFullScreen();

    connect(ui->actionExit, SIGNAL(triggered()), pj, SLOT(close()));//解决投影窗口不能关掉的问题
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));

}
GX_STATUS status = GX_STATUS_SUCCESS;

MainWindow::~MainWindow()
{
    if(cameraOpened){
        OnSnapexStop();
        OnSnapexClose();
      //  HVSTATUS status = STATUS_OK;
        GX_STATUS status = GX_STATUS_SUCCESS;
   //	 Spegnere la fotocamera digitale e rilasciare le risorse interne della fotocamera digitale
       // status = EndHVDevice(m_hhv_1);
       //  status = EndHVDevice(m_hhv_2);
        status = 0(m_hhv_1);
        status = 0(m_hhv_2);
        //	回收图像缓冲区 Riciclare il buffer dell'immagine
        delete []m_pRawBuffer_1;
        delete []m_pRawBuffer_2;
    }
    delete pj;
    delete ui;
}

void MainWindow::newproject()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),"/home",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    projectPath = dir;
    if(projectPath!=""){
        for(int i = 0;i<3;i++){
            generatePath(i);
        }
    }
    qDebug() << "gxapi: device is newproject";
}

void MainWindow::openproject()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),"/home",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    projectPath = dir;

    qDebug() << "gxapi: device is openproject";

}

void MainWindow::opencamera()
{
 //   HVSTATUS status_1 = STATUS_OK;  
 //   HVSTATUS status_2 = STATUS_OK;
  //  GX_ACCESS_EXCLUSIVE = 4;
    GX_STATUS status_1 = 0;
    GX_STATUS status_2 = 0;
    GX_ACCESS_EXCLUSIVE;
    GX_ENUM_PIXEL_SIZE;
    m_pRawBuffer_1	= NULL;
    m_pRawBuffer_2	= NULL;

    status_1 = GXOpenDevice(0, &m_hhv_2);
    status_2 = GXOpenDevice (0, &m_hhv_2);
    if(status_1==0&&status_2==0){
        cameraOpened = true;
    }
    else{
        cameraOpened = false;
        QMessageBox::warning(NULL, tr("Cameras not found"), tr("Make sure two Daheng cameras have connected to the computer."));
        return;
    }
 //   HVSetResolution(m_hhv_1, Resolution);//Set the resolution of cameras
 //   HVSetResolution(m_hhv_2, Resolution);

    GXSetInt(m_hhv_1, GX_INT_WIDTH, 3088);        //Set the resolution of cameras
    GXSetInt(m_hhv_1, GX_INT_HEIGHT, 2064);
  
    GXSetInt(m_hhv_2, GX_INT_WIDTH, 3088);        //Set the resolution of cameras
    GXSetInt(m_hhv_2, GX_INT_HEIGHT, 2064);

    status = GXInitLib();

  //  HVSetSnapMode(m_hhv_1, SnapMode);//Snap mode include CONTINUATION、TRIGGER
  //  HVSetSnapMode(m_hhv_2, SnapMode);



    status = GXSendCommand(this->m_hhv_1, GX_COMMAND_TRIGGER_SOFTWARE);
    status = GXSendCommand(this->m_hhv_2, GX_COMMAND_TRIGGER_SOFTWARE);
   //Snap mode include CONTINUATION、TRIGGER
 
                                         
                                         //  HVSetSnapMode(m_hhv_2, SnapMode);
    //  设置ADC的级别
 //   HVADCControl(m_hhv_1, ADC_BITS, ADCLevel);
 //   HVADCControl(m_hhv_2, ADC_BITS, ADCLevel);
    //  获取设备类型 Imposta il livello di ADC
  //  GXSetInt type = UNKNOWN_TYPE;
  //  int size    = sizeof(HVTYPE);
 //   HVGetDeviceInfo(m_hhv_1,DESC_DEVICE_TYPE, &type, &size);//Poiché le due fotocamere hanno lo stesso modello, ne verrà ottenuta solo una

   // MONO_IMG_PROCESS 
    //GX_FRAME_STATUS_SUCCESS
    //GX_COMMAND_ACQUISITION_START 
    //GX_ENUM_ACQUISITION_FRAME_RATE_MODE
    GX_FRAME_STATUS_SUCCESS(m_hhv_1, XStart, YStart, Width, Height);
    GX_FRAME_STATUS_SUCCESS(m_hhv_2, XStart, YStart, Width, Height);
    //设置采集速度
    GX_ACQ_MODE_SINGLE_FRAME(m_hhv_1);
    GX_ACQ_MODE_SINGLE_FRAME(m_hhv_2);
    //HVSetSnapSpeed(m_hhv_2, SnapSpeed);

    m_pRawBuffer_1 = new BYTE[Width * Height];
    m_pRawBuffer_2 = new BYTE[Width * Height];

    OnSnapexOpen();
    OnSnapexStart();
    timer->start(30);

    ui->actionOpenCamera->setDisabled(true);//暂时保证不会启动两次，防止内存溢出
    qDebug() << "gxapi: device is Opencamera";
}


void MainWindow::OnSnapexOpen()
{
    //HVSTATUS status = STATUS_OK;
    GX_STATUS status_1 = 0;
    GX_STATUS status_2 = 0;

  //  status = HVOpenSnap(m_hhv_1, SnapThreadCallback, this);
    status = GX_ACQ_MODE_SINGLE_FRAME(m_hhv_1, SnapThreadCallback, this);
    status = GX_ACQ_MODE_SINGLE_FRAME(m_hhv_2, SnapThreadCallback, this);
    qDebug() << "gxapi: device is SnapexOpen";
}

void MainWindow::OnSnapexStart()
{
  //  HVSTATUS status = STATUS_OK;
    GX_STATUS status_1 = 0;
    GX_STATUS status_2 = 0;


    ppBuf_1[0] = m_pRawBuffer_1;
    ppBuf_2[0] = m_pRawBuffer_2;
   // GX_ACQ_MODE_CONTINUOUS
    status = GX_ACQ_MODE_SINGLE_FRAME(m_hhv_1, ppBuf_1,1);
    status = GX_ACQ_MODE_SINGLE_FRAME(m_hhv_2, ppBuf_2,1);

    qDebug() << "gxapi: device is SnapexStart";
}

void MainWindow::OnSnapexClose()
{
    GX_STATUS status_1 = 0;
    GX_STATUS status_2 = 0;
  //  GX_DS_ENUM_STOP_ACQUISITION_MODE
   // GX_COMMAND_ACQUISITION_STOP
  //  HVSTATUS status = STATUS_OK;
//    status = GX_ACCESS_CONTROL(m_hhv_1);
  //  status = GX_STOP_ACQUISITION_MODE_GENERAL(m_hhv_2);
    GX_STATUS res;

    /* don't attempt to close if this device isn't open, this crashes the GxIAPI */
   
    res = GXCloseDevice(m_hhv_1) != GX_STATUS_SUCCESS;
    res = GXCloseDevice(m_hhv_2) != GX_STATUS_SUCCESS;

    qDebug() << "gxapi: device is SnapexClose";




}

void MainWindow::OnSnapexStop()
{
    GX_STATUS status_1 = 0;
   GX_STATUS status_2 = 0;
    GX_STATUS res;
 // HVSTATUS status = STATUS_OK;
 // status = GXCloseLib(m_hhv_1);
 // status = HVCloseSnap(m_hhv_2);
    res = GXCloseDevice(m_hhv_1) != GX_STATUS_SUCCESS;
    res = GXCloseDevice(m_hhv_2) != GX_STATUS_SUCCESS;

    qDebug() << "gxapi: device is SnapexStop";
}

int CALLBACK MainWindow::SnapThreadCallback(GX_FRAME_CALLBACK_PARAM*pInfo)
{
    return 1;
}

void MainWindow::readframe()
{
    //image_1 = new QImage(m_pRawBuffer_1, Width, Height, QImage::Format_Indexed8);
    image_1 = QImage(m_pRawBuffer_1, Width, Height, QImage::Format_Indexed8);
    image_2 = new QImage(m_pRawBuffer_2, Width, Height, QImage::Format_Indexed8);
    //pimage_1 = QPixmap::fromImage(*image_1);
    pimage_1 = QPixmap::fromImage(image_1);
    pimage_2 = QPixmap::fromImage(*image_2);
    ui->leftViewLabel->setPixmap(pimage_1);//use label to show the image
    ui->rightViewLabel->setPixmap(pimage_2);
}

void MainWindow::capturecalib()
{
    if(cameraOpened){
        selectPath(0);//0 for calibration and 1 for scan
        captureImage(saveCon,true);
        ui->currentPhotoLabel->setText(QString::number(saveCon));
        saveCon++;
        QString explain = ":/" + QString::number(saveCon) + ".png";
        ui->explainLabel->setPixmap(explain);
        if(saveCon == 13){
            saveCon = 1;
            ui->calibButton->setEnabled(true);
        }
    }
    else
        QMessageBox::warning(this, tr("Warning"), tr("Open cameras failed."));
}

void MainWindow::redocapture()
{
    if(cameraOpened){
        captureImage(saveCon - 1, true);
        }
    else
        QMessageBox::warning(this,tr("Warning"), tr("Open cameras failed."));
}

void MainWindow::captureImage(int saveCount,bool dispaly)
{
    QString savecount = QString::number(saveCount);
    pimage_1.save(projChildPath + "/left/L" + savecount +".png");
    pimage_2.save(projChildPath + "/right/R" + savecount +".png");
    if(dispaly){
        ui->leftCaptureLabel->setPixmap(pimage_1);
        ui->rightCaptureLabel->setPixmap(pimage_2);
    }
}

void MainWindow::generatePath(int type)
{
    selectPath(type);
    QDir *addpath_1 = new QDir;
    QDir *addpath_2 = new QDir;
    if(type==0||type==1){
        addpath_1->mkpath(projChildPath + "/left/");
        addpath_2->mkpath(projChildPath +"/right/");
    }
    else
        addpath_1->mkpath(projChildPath);
}

void MainWindow::selectPath(int type)//decide current childpath
{
    QString t;
    switch(type){
        case 0:
        t = "/calib";
        break;
        case 1:
        t = "/scan";
        break;
        case 2:
        t = "/reconstruction";
        break;
    }
    projChildPath = projectPath + t;
}

void MainWindow::closeCamera()
{
    timer->stop();
    OnSnapexStop();
    OnSnapexClose();
}

void MainWindow::projectorcontrol()
{
    isProjectorOpened = !isProjectorOpened;
    if(isProjectorOpened){
        pj->displaySwitch(true);
    }
    else{
        pj->displaySwitch(false);
    }
}

void MainWindow::getScreenGeometry()
{
    QDesktopWidget* desktopWidget = QApplication::desktop();
    int screencount = desktopWidget->screenCount();//get screen amount
    if(screencount == 1){
    }
    else{
        QRect screenRect = desktopWidget->screenGeometry(0);
        screenWidth = screenRect.width();
        screenHeight = screenRect.height();
    }
}

void MainWindow::calib()
{
    QMessageBox::information(NULL, tr("Calibration"), tr("Calibration Actived!"));
    ui->tabWidget->setCurrentIndex(0);//go to calibration page
    ui->explainLabel->setPixmap(":/" + QString::number(saveCon) + ".png");
}

void MainWindow::calibration()
{
    ui->progressBar->reset();
    nowProgress = 0;

    QString path;
    for(int i = 1; i <= 2; i++)
    {
        path = projectPath + "/calib/";
        calibrator = new CameraCalibration();
        if(i == 1)
            path += "left/L";
        else
            path += "right/R";

        //load images
        calibrator->loadCameraImgs(path);
        progressPop(5);

        calibrator->extractImageCorners();
        progressPop(15);

        calibrator->calibrateCamera();
        progressPop(10);

        calibrator->findCameraExtrisics();
        progressPop(10);

        //export txt files
        QString file_name;
        if(i == 1)
            path = projectPath + "/calib/left/";
        else
            path = projectPath + "/calib/right/";

        file_name =  path;
        file_name += "cam_matrix.txt";
        calibrator->exportTxtFiles(file_name.toLocal8Bit(),CAMCALIB_OUT_MATRIX);

        file_name =  path;
        file_name += "cam_distortion.txt";
        calibrator->exportTxtFiles(file_name.toLocal8Bit(),CAMCALIB_OUT_DISTORTION);

        file_name =  path;
        file_name += "cam_rotation_matrix.txt";
        calibrator->exportTxtFiles(file_name.toLocal8Bit(),CAMCALIB_OUT_ROTATION);

        file_name =  path;
        file_name += "cam_trans_vectror.txt";
        calibrator->exportTxtFiles(file_name.toLocal8Bit(),CAMCALIB_OUT_TRANSLATION);
        progressPop(10);
    }
    ui->progressBar->setValue(100);
}

void MainWindow::scan()
{
    ui->progressBar->reset();
    nowProgress = 0;

    if(!cameraOpened){
        QMessageBox::warning(this, tr("Cameras not opened"), tr("Cameras are not opened."));
        return;
    }
    if(projectPath==""){
        QMessageBox::warning(this,tr("Save path not set"), tr("You need create a project first."));
        return;
    }
    selectPath(1);
    ui->tabWidget->setCurrentIndex(1);
    closeCamera();
    pj->displaySwitch(false);
    pj->opencvWindow();
    GrayCodes *grayCode = new GrayCodes(projectorWidth,projectorHeight);
    grayCode->generateGrays();
    progressPop(10);

    pj->showImg(grayCode->getNextImg());
    int grayCount = 0;

    while(true)
    {
        cvWaitKey(100);
       // HVSnapShot
        GX_ACQ_MODE_SINGLE_FRAME(m_hhv_1, ppBuf_1, 1);
        //image_1 = new QImage(m_pRawBuffer_1, Width, Height, QImage::Format_Indexed8);
        image_1 = QImage(m_pRawBuffer_1, Width, Height, QImage::Format_Indexed8);
        //pimage_1 = QPixmap::fromImage(*image_1);
        pimage_1 = QPixmap::fromImage(image_1);
        //delete image_1;
        //HVSnapShot
            GX_ACQ_MODE_SINGLE_FRAME(m_hhv_2, ppBuf_2, 1);
        image_2 = new QImage(m_pRawBuffer_2, Width, Height, QImage::Format_Indexed8);
        pimage_2 = QPixmap::fromImage(*image_2);
        delete image_2;
        captureImage(grayCount, false);
        grayCount++;
        //show captured result
        if(grayCount == grayCode->getNumOfImgs())
            break;
        pj->showImg(grayCode->getNextImg());
        progressPop(2);
    }
    GX_ACQ_MODE_SINGLE_FRAME(m_hhv_1,SnapThreadCallback, this);
    //HVOpenSnap
        GX_ACQ_MODE_SINGLE_FRAME(m_hhv_2,SnapThreadCallback, this);
      
        GX_ACQ_MODE_SINGLE_FRAME(m_hhv_1,ppBuf_1,1);
        GX_ACQ_MODE_SINGLE_FRAME(m_hhv_2,ppBuf_2,1);
    timer->start();
    pj->destoryWindow();
    pj->displaySwitch(true);

    ui->progressBar->setValue(100);
}

void MainWindow::reconstruct()
{
    ui->progressBar->reset();
    nowProgress = 0;

    if(cameraOpened)
        closeCamera();
    if(isConfigured == false){
        QMessageBox::warning(this,tr("Warning"), tr("Press 'Set' button to configure the settings."));
        return;
    }
    ui->tabWidget->setCurrentIndex(2);
    selectPath(2);//set current path to :/reconstruct
    Reconstruct *reconstructor= new Reconstruct(2,projectPath);
    reconstructor->getParameters(scanWidth, scanHeight, cameraWidth, cameraHeight, isAutoContrast, isSaveAutoContrast,projectPath);

    reconstructor->setCalibPath(projectPath+"/calib/left/", 0);
    reconstructor->setCalibPath(projectPath+"/calib/right/", 1);
    bool loaded = reconstructor->loadCameras();//load camera matrix
    if(!loaded)
        return;
    progressPop(10);

    reconstructor->setBlackThreshold(black_);
    reconstructor->setWhiteThreshold(white_);
    if(isSaveAutoContrast)
        reconstructor->enableSavingAutoContrast();
    else
        reconstructor->disableSavingAutoContrast();
    if(isRaySampling)
        reconstructor->enableRaySampling();
    else
        reconstructor->disableRaySampling();
    progressPop(10);

    bool runSucess = reconstructor->runReconstruction();
    if(!runSucess)
        return;
    progressPop(50);

    MeshCreator *meshCreator=new MeshCreator(reconstructor->points3DProjView);//Export mesh
    progressPop(10);

    if(isExportObj)
        meshCreator->exportObjMesh(projectPath + "/reconstruction/result.obj");
    if(isExportPly || !(isExportObj || isExportPly))
        meshCreator->exportPlyMesh(projectPath + "/reconstruction/result.ply");
    delete meshCreator;
    delete reconstructor;
    /*
    HVOpenSnap(m_hhv_1,SnapThreadCallback, this);
    HVOpenSnap(m_hhv_2,SnapThreadCallback, this);
    HVStartSnap(m_hhv_1,ppBuf_1,1);
    HVStartSnap(m_hhv_2,ppBuf_2,1);
    timer->start();
    */
    ui->progressBar->setValue(100);
}

void MainWindow::set()
{
    setDialog->show();
    setDialog->saveSetPath = projectPath;
    isConfigured = true;
    connect(setDialog,SIGNAL(outputSet()),this,SLOT(getSetInfo()));
}

void MainWindow::getSetInfo()
{
    Width = setDialog->cam_w;
    Height = setDialog->cam_h;
    projectorWidth = setDialog->proj_w;
    projectorHeight = setDialog->proj_h;
    scanWidth = setDialog->scan_w;
    scanHeight = setDialog->scan_h;
    black_ = setDialog->black_threshold;
    white_ = setDialog->white_threshold;
    isAutoContrast = setDialog->autoContrast;
    isSaveAutoContrast = setDialog->saveAutoContrast;
    isRaySampling = setDialog->raySampling;
    isExportObj = setDialog->exportObj;
    isExportPly = setDialog->exportPly;
}

void MainWindow::createConnections()
{
    connect(ui->actionNew, SIGNAL(triggered()), this, SLOT(newproject()));
    connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(openproject()));
    connect(ui->actionOpenCamera, SIGNAL(triggered()), this, SLOT(opencamera()));
    connect(ui->actionProjector,SIGNAL(triggered()),this,SLOT(projectorcontrol()));
    connect(ui->actionCalib, SIGNAL(triggered()), this, SLOT(calib()));
    connect(ui->captureButton, SIGNAL(clicked()), this, SLOT(capturecalib()));
    connect(ui->redoButton, SIGNAL(clicked()), this, SLOT(redocapture()));
    connect(ui->calibButton,SIGNAL(clicked()),this,SLOT(calibration()));
    connect(ui->actionScan,SIGNAL(triggered()),this,SLOT(scan()));
    connect(ui->actionReconstruct,SIGNAL(triggered()),this,SLOT(reconstruct()));
    connect(ui->actionSet, SIGNAL(triggered()), this, SLOT(set()));
    connect(ui->actionChinese, SIGNAL(triggered()), this, SLOT(switchlanguage()));
    connect(ui->actionEnglish, SIGNAL(triggered()), this, SLOT(switchlanguage()));
    connect(ui->pSizeValue, SIGNAL(valueChanged(int)), this, SLOT(changePointSize(int)));
}

void MainWindow::switchlanguage()
{
    QString qmPath = ":/";//表示从资源文件夹中加载
    QString local;
    if(inEnglish)
    {
        local = "zh.pm";
        inEnglish = false;
        ui->actionEnglish->setEnabled(true);
        ui->actionChinese->setDisabled(true);
    }
    else
    {
        local = "en.pm";
        inEnglish = true;
        ui->actionEnglish->setEnabled(false);
        ui->actionChinese->setDisabled(false);
    }
    QTranslator trans;
    trans.load(local, qmPath);
    qApp->installTranslator(&trans);
    ui->retranslateUi(this);
    setDialog->switchLang();
}

void MainWindow::changePointSize(int psize)
{
    displayModel->setPoint(psize);
}

void MainWindow::progressPop(int up)
{
    nowProgress += up;
    ui->progressBar->setValue(nowProgress);
}
