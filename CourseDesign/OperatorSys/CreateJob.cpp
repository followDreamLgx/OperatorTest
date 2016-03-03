#include "Createjob.h"
#include<algorithm>

CreateJob::CreateJob(MyLock &createMutexPara, MyLock &jobMutexAPara):
    stopped(false),jobNum(3),
    jobAll(3),jobMutexA(jobMutexAPara),
    createMutex(createMutexPara)
{
    timeCount.start();
    manaType = FCFS;//默认的调度方式
}
void CreateJob::run()
{
    int timediff = timeCount.elapsed() / 1000;
    if(timediff < 2 || newJob.count() > 7)
        return;
    Block temp;
    InsertJob(temp);//插入作业
    --jobNum;
    timeCount.restart();    //开始下一次产生作业的计时
}
void CreateJob::InsertJob(Block&para)
{
    newJob.push_back(para);
    SortJob(manaType);
}
void CreateJob::SortJob(ManageType para)
{
    switch (para)
    {
    case FCFS:
        FCFSFunc();
        break;
    case SJF:
        SJFFunc();
        break;
    case PSA:
        PSAFunc();
        break;
    }
}

void CreateJob::FCFSFunc()
{
    std::sort(newJob.begin(),newJob.end(),FCFSCompare);
}

void CreateJob::SJFFunc()
{
    std::sort(newJob.begin(),newJob.end(),SJFCompare);
}

void CreateJob::PSAFunc()
{
    std::sort(newJob.begin(),newJob.end(),PSACompare);
}

void CreateJob::stop()
{
    stopped = true;
}

void CreateJob::MoreJob()
{
    jobNum = jobAll;
}

void CreateJob::SetManageType(ManageType para)
{
    manaType = para;
    SortJob(manaType);
}
