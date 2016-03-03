#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMutex>
#include"CreateJob.h"
#include"Block.h"
#include"JobControl.h"
#include"ProcessControl.h"
#include"MyLock.h"
namespace Ui
{
    class MainWindow;

    struct Resourse
    {
        int memory;
        int tapeNum;
        Resourse()
        {
            memory = 100;
            tapeNum = 10;
        }
    };
}
using Ui::Resourse;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void timerEvent(QTimerEvent *event);
private slots:                      //点击UI某个按钮时候，响应的函数
    void on_MoreJob_clicked();
    void OnFCFSAudioButtonClicked();
    void OnSJFAudioButtonClicked();
    void OnPSAAudioBUttonClicked();
    void OnSingleSysButtonClicked();
    void OnMutiPassButtionClicked();
    void OnFCFSPROAudioButtonClicked();
    void OnSJFPROAudioButtonClicked();
    void OnPSAPROAudioBUttonClicked();
    void OnTURNPROAudioBUttonClicked();
private:
    void SetSourse();
    void SetCPU();
    void SetMyAllConnect();
private:
    Ui::MainWindow *ui;             //用于UI的控制
    CreateJob job;                  //存生还有真正存储作业的地方
    QVector<Block> process;         //存储了真正的进程
    Resourse resourse;              //存储了内存以及磁电机的信息
    JobControl jobControl;          //用于作业调度
    ProcessControl proControl;      //进程调度
    MyLock mutex;//没用
    MyLock createMutex;//没用
    MyLock jobMutexA;//没用
    MyLock jobMutexB;//没用
    MyLock proMutex;//没用
};

#endif // MAINWINDOW_H
