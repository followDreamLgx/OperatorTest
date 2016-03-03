#ifndef PROCESSCONTROL_H
#define PROCESSCONTROL_H

#include"Block.h"
#include<QThread>
#include<QVector>
#include<QMutex>
#include<QTableWidget>
#include"MyLock.h"
class ProcessControl//:public QThread
{
public:
    ProcessControl(MyLock &proMutexBPara, MyLock &jobMutexBPara, QVector<Block> &proPara,
                   int &memoryNumPara, int &tapeNumPara);
    ~ProcessControl();
    void Init(QTableWidget *&);
    void Stop();
    void run();
    void SetManageType(ManageType para);
private:
    void ChangeMemory();
    void ClearWindow();
private:
    QVector<Block> &pro;
    bool stopped;
    QTableWidget *memoryWidget;
    int &memoryNum;
    int &tapeNum;
    MyLock &proMutex;
    MyLock &jobMutexB;
    ManageType manaType;
    QVector<Block>::iterator here;
};

#endif // PROCESSCONTROL_H
