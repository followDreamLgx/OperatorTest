#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMutex>
#include"CreateJob.h"
#include"Block.h"
#include"Resourse.h"
namespace Ui
{
    class MainWindow;
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

    void on_Turn_clicked();

    void on_DynatisPower_clicked();

private:
    void SetMyAllConnect();
    void UIShow();
private:
    Ui::MainWindow *ui;             //用于UI的控制
    CreateJob job;                  //存生还有真正存储作业的地方
    Resourse resourse;              //存储了内存以及磁电机的信息
};

#endif // MAINWINDOW_H
