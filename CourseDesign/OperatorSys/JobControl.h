#ifndef JOBCONTROL_H
#define JOBCONTROL_H

#include<QThread>
#include"Block.h"
#include<QVector>
#include<QTableWidget>
#include<QMutex>
#include"MyLock.h"
namespace Ui {
    class JobControl;
}
class JobControl//:public QThread
{
public:
    JobControl(MyLock &createMutexPara,MyLock &jobMutexAPara,
               MyLock &jobMutexBPara, MyLock &proMutexPara,
               QVector<Block> &jobVecPara,QVector<Block> &proVecPara,
               int &memoryPara,int &tapePara);
    ~JobControl();
    void Init(QTableWidget *&extMemoPara);
    void ChangeExternalMemory();
    void run();
    void SetManageType(ManageType);
    void SetSysType(SystermType para);
private:
    bool InsertProcess(Block&);
    void JobToProcess();
    void FCFSFunc();
    void SJFFunc();
    void PSAFunc();
    void SortProcess(ManageType para);
private:
    QVector<Block> &jobVec;
    QVector<Block> &proVec;
    int &memorySurplus;
    int &tapeSurplus;
    bool stopped;
    bool inited;
    QTableWidget *externalMemory;
    MyLock &jobMutexA;
    MyLock &jobMutexB;
    MyLock &createMutex;
    MyLock &proMutex;
    ManageType manaType;
    SystermType sysType;
};

#endif // JOBCONTROL_H
