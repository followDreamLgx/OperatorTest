#include "Createjob.h"
#include<algorithm>

CreateJob::CreateJob(Resourse &para):
    jobNum(3),
    jobAll(3),
    resourse(para)
{
    timeCount.start();
    manaType = FCFS;//默认的调度方式
}
void CreateJob::Create()
{
    int timediff = timeCount.elapsed() / 1000;
    if(timediff < 2 || newJob.count() > 7)
        return;
    Block temp;
    InsertJob(temp);//插入作业
    --jobNum;
    timeCount.restart();    //开始下一次产生作业的计时
    runTimeCount.start();
}

void CreateJob::run()
{
    if(runTimeCount.elapsed() > 500)
    {
        if(manaType == TURN)
            TurnRun();
        else if(manaType == DYNAMIC)
            DynamicRun();
        runTimeCount.restart();
    }
}
void CreateJob::TurnRun()
{
    if(newJob.isEmpty() == false)
    {
        if(newJob.begin()->IsComplete() == true)
        {
            newJob.pop_front();
        }
        else
        {
            newJob.push_back(newJob.front());
            newJob.pop_front();
        }
    }
}

void CreateJob::CountDynamicPSA()
{
    QVector<Block>::iterator ite = newJob.begin();
    while(ite != newJob.end())
    {
        //allRunTime是进程要求服务时间
        //elapsed()计算了从进程创建开始到现在的等待时间，单位是毫秒
        //最后放大100倍是因为pas是整形，不放大会被当做0处理
        float pasTemp = (float)ite->allRunTime /
                (ite->allRunTime +
                 ite->timeCount.elapsed() /1000);
        pasTemp = pasTemp * 100;
        ite->psa = pasTemp;
        ++ite;
    }
}

void CreateJob::DynamicRun()
{
    CountDynamicPSA();
    PSAFunc();
    if(newJob.isEmpty() == false)
    {
        if(newJob.begin()->IsComplete() == true)
        {
            resourse.memory += newJob.begin()->memoryNeed;
            resourse.tapeNum += newJob.begin()->tapeNeed;
            newJob.pop_front();
        }
    }
}

void CreateJob::InsertJob(Block&para)
{
    newJob.push_back(para);
    QVector<Block>::iterator ite = newJob.end();
    --ite;
    ite->timeCount.start();
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

void CreateJob::SetManageType(ManageType para)
{
    manaType = para;
    SortJob(manaType);
}
