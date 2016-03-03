#include "mainwindow.h"
#include "ui_mainwindow.h"
//MainWindow的构造函数
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    job(createMutex,jobMutexA),
    jobControl(createMutex,jobMutexA,jobMutexB,
               proMutex,job.newJob,process,
               resourse.memory,resourse.tapeNum),
    proControl(proMutex,jobMutexB,process,resourse.memory,resourse.tapeNum)
{
    ui->setupUi(this);
    jobMutexA.tryLock();
    proMutex.tryLock();
    //job.start();
    jobControl.Init(ui->ExternalMemory);
    //jobControl.start();
    proControl.Init(ui->Memory);
    //proControl.start();
    QObject::startTimer(10);
    SetMyAllConnect();
}
void MainWindow::SetMyAllConnect()
{
    connect(ui->FCFS,&QRadioButton::clicked,this,&MainWindow::OnFCFSAudioButtonClicked);
    connect(ui->SJF,&QRadioButton::clicked,this,&MainWindow::OnSJFAudioButtonClicked);
    connect(ui->PAS,&QRadioButton::clicked,this,&MainWindow::OnPSAAudioBUttonClicked);
    connect(ui->MultipassSys,&QRadioButton::clicked,this,&MainWindow::OnMutiPassButtionClicked);
    connect(ui->Single,&QRadioButton::clicked,this,&MainWindow::OnSingleSysButtonClicked);
    connect(ui->FCFSPRO,&QRadioButton::clicked,this,&MainWindow::OnFCFSPROAudioButtonClicked);
    connect(ui->SJFPRO,&QRadioButton::clicked,this,&MainWindow::OnSJFPROAudioButtonClicked);
    connect(ui->PASPRO,&QRadioButton::clicked,this,&MainWindow::OnPSAPROAudioBUttonClicked);
    connect(ui->TUREPRO,&QRadioButton::clicked,this,&MainWindow::OnTURNPROAudioBUttonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_MoreJob_clicked()
{
    job.MoreJob();
}
//主要的函数，系统会不停地调用这个函数，可以认为这个函数处于死循环中
void MainWindow::timerEvent(QTimerEvent *event)
{
    job.run();          //产生作业的对象
    jobControl.run();   //作业调度，包括了作业的UI
    proControl.run();   //进程调度，包括了进程UI
    SetSourse();        //UI资源的显示
    SetCPU();           //UI中CPU内容的显示
}
void MainWindow::SetCPU()
{
    if(process.isEmpty() == false)
    {
        QVector<Block>::iterator ite = process.begin();
        ui->CPU->setItem(0,0,new QTableWidgetItem(ite->name));
        ui->CPU->setItem(0,1,new QTableWidgetItem(QString::number(ite->memoryNeed)));
        ui->CPU->setItem(0,2,new QTableWidgetItem(QString::number(ite->tapeNeed)));
        ui->CPU->setItem(0,3,new QTableWidgetItem(QString::number(ite->allRunTime)));
        ui->CPU->setItem(0,4,new QTableWidgetItem(QString::number(ite->runTime)));
    }
}

void MainWindow::SetSourse()
{
    ui->SourseTable->setItem(0,0,new QTableWidgetItem(QString::number(resourse.memory)));
    ui->SourseTable->setItem(1,0,new QTableWidgetItem(QString::number(resourse.tapeNum)));
}

void MainWindow::OnFCFSAudioButtonClicked()
{
    job.SetManageType(FCFS);

}

void MainWindow::OnSJFAudioButtonClicked()
{
    job.SetManageType(SJF);

}

void MainWindow::OnPSAAudioBUttonClicked()
{
    job.SetManageType(PSA);

}
void MainWindow::OnSingleSysButtonClicked()
{
    jobControl.SetSysType(SINGLESYS);
}

void MainWindow::OnMutiPassButtionClicked()
{
    jobControl.SetSysType(MUTIPASSSYS);
}

void MainWindow::OnFCFSPROAudioButtonClicked()
{
    jobControl.SetManageType(FCFS);
}

void MainWindow::OnSJFPROAudioButtonClicked()
{
    jobControl.SetManageType(SJF);
}

void MainWindow::OnPSAPROAudioBUttonClicked()
{
    jobControl.SetManageType(PSA);
}
void MainWindow::OnTURNPROAudioBUttonClicked()
{
    proControl.SetManageType(TURN);
    jobControl.SetManageType(TURN);
}
