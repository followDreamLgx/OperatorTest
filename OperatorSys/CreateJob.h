#ifndef CREATEJOB_H
#define CREATEJOB_H
#include<QThread>
#include<QVector>
#include"Block.h"
#include<QMutex>
#include"MyLock.h"
class CreateJob//:public QThread
{
public:
    CreateJob(MyLock &createMutexPara,MyLock &jobMutexAPara);
    void stop();
    void MoreJob();
    void run();

    void SetManageType(ManageType);
private:
    void InsertJob(Block&);
    void SortJob(ManageType para);
    void FCFSFunc();
    void SJFFunc();
    void PSAFunc();
public:
    QVector<Block> newJob;
    volatile bool stopped;
    int jobNum;     //
    const int jobAll;
    MyLock &jobMutexA;
    MyLock &createMutex;
    QTime timeCount;//每个作业间的间隔
private:
    ManageType manaType;
};

#endif // CREATEJOB_H
