#ifndef CREATEJOB_H
#define CREATEJOB_H
#include<QThread>
#include<QVector>
#include"Block.h"
#include<QMutex>
#include"Resourse.h"
using Ui::Resourse;
class CreateJob//:public QThread
{
public:
    CreateJob(Resourse &);

    void run();
    void SetManageType(ManageType);
    void Create();
private:
    void InsertJob(Block&);
    void SortJob(ManageType para);
    void FCFSFunc();
    void SJFFunc();
    void PSAFunc();
    void TurnRun();
    void DynamicRun();
    void CountDynamicPSA();
public:
    QVector<Block> newJob;

    int jobNum;
    const int jobAll;
    QTime timeCount;//每个作业间的间隔
private:
    ManageType manaType;
    QVector<Block>::iterator turnIte;
    Resourse &resourse;
    QTime runTimeCount;
};

#endif // CREATEJOB_H
