#include "mainwindow.h"
#include "ui_mainwindow.h"
//MainWindow的构造函数
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    job(resourse)
{
    ui->setupUi(this);
    QObject::startTimer(1);
    SetMyAllConnect();
}
void MainWindow::SetMyAllConnect()
{
}

MainWindow::~MainWindow()
{
    delete ui;
}


//主要的函数，系统会不停地调用这个函数，可以认为这个函数处于死循环中
void MainWindow::timerEvent(QTimerEvent *event)
{
    job.Create();
    job.run();          //产生作业的对象
    UIShow();
}


void MainWindow::on_Turn_clicked()
{
    job.SetManageType(TURN);
}

void MainWindow::on_DynatisPower_clicked()
{
    job.SetManageType(DYNAMIC);
}

void MainWindow::UIShow()
{

    ui->memoryWidget->clearContents();
    QVector<Block>::iterator ite = job.newJob.begin();
    int row = 0;
    while(ite != job.newJob.end())
    {
        ui->memoryWidget->setItem(row,0,new QTableWidgetItem(ite->name));
        ui->memoryWidget->setItem(row,1,new QTableWidgetItem(QString::number(ite->memoryNeed)));
        ui->memoryWidget->setItem(row,2,new QTableWidgetItem(QString::number(ite->allRunTime)));
        ui->memoryWidget->setItem(row,3,new QTableWidgetItem(QString::number(ite->runTime)));
        ui->memoryWidget->setItem(row,4,new QTableWidgetItem(QString::number(ite->psa)));
        ++row;
        ++ite;
        if(row > 6)
            break;
    }
}
