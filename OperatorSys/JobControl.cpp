#include "JobControl.h"

JobControl::JobControl(MyLock &createMutexPara, MyLock &jobMutexAPara,
                       MyLock &jobMutexBPara, MyLock &proMutexPara,
                       QVector<Block> &jobVecPara, QVector<Block> &proVecPara,
                       int &memoryPara, int &tapePara):
    createMutex(createMutexPara),jobMutexA(jobMutexAPara),
    jobMutexB(jobMutexBPara),proMutex(proMutexPara),
    jobVec(jobVecPara),proVec(proVecPara),
    memorySurplus(memoryPara),tapeSurplus(tapePara)
{
    sysType = MUTIPASSSYS;

}
JobControl::~JobControl()
{

}
void JobControl::Init(QTableWidget *&extMemoPara)
{
    stopped = false;
    inited = false;
    inited = true;
    externalMemory = extMemoPara;
}
void JobControl::run()
{
    if(jobVec.isEmpty() == false)
    {
        while(jobVec.isEmpty() == false &&
              jobVec.front().memoryNeed < memorySurplus &&
              jobVec.front().tapeNeed < tapeSurplus)
        {
            if((sysType == SINGLESYS && proVec.count() >= 1)|| proVec.count() > 6)//处理单道系统
                break;//假如是单道系统，只能插入一个作业,假如是多道系统，只允许插入7个作业
            JobToProcess();//执行到这里，说明作业可以进入内存
        }
        ChangeExternalMemory();
    }
}
void JobControl::JobToProcess()
{
    if(jobVec.isEmpty() == true)
        return;//没有作业
    Block temp = jobVec.front();
    if(temp.memoryNeed < memorySurplus && temp.tapeNeed < tapeSurplus)//作业满足进入内存的条件
    {
        if(true == InsertProcess(temp))//在单道系统中不一定可插入
        {
            memorySurplus -= temp.memoryNeed;//分配内存与磁带机
            tapeSurplus -= temp.tapeNeed;
            jobVec.pop_front();             //
        }
    }
}

bool JobControl::InsertProcess(Block&para)
{
    if(sysType == MUTIPASSSYS)
    {
        proVec.push_back(para);
        SortProcess(manaType);//这里会开启CPU的运算
        return true;
    }
    else if(sysType == SINGLESYS)
    {
        if(proVec.isEmpty() == false)//单道系统中有进程在运行
            return false;
        else
        {
            proVec.push_back(para);
            proVec.front().timeCount.restart();
            return true;
        }
    }
}
void JobControl::SortProcess(ManageType para)
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
    case TURN:
        break;
    }
    proVec.front().timeCount.restart();//有可能前面被被人插入过一次
}
void JobControl::FCFSFunc()
{
    std::sort(proVec.begin(),proVec.end(),FCFSCompare);
}

void JobControl::SJFFunc()
{
    std::sort(proVec.begin(),proVec.end(),SJFCompare);
}

void JobControl::PSAFunc()
{
    std::sort(proVec.begin(),proVec.end(),PSACompare);
}

void JobControl::SetManageType(ManageType para)
{
    manaType = para;
    SortProcess(para);
}
void JobControl::SetSysType(SystermType para)
{
    sysType = para;
    if(sysType == SINGLESYS)
    {
        while(proVec.count() > 1)
        {
            Block temp = proVec.back();
            memorySurplus += temp.memoryNeed;
            tapeSurplus += temp.tapeNeed;
            jobVec.push_back(temp);
            proVec.pop_back();
        }
    }
}

void JobControl::ChangeExternalMemory()
{
    externalMemory->clearContents();
    QVector<Block>::iterator ite = jobVec.begin();
    int row = 0;
    while(ite != jobVec.end())
    {
        externalMemory->setItem(row,0,new QTableWidgetItem(ite->name));
        externalMemory->setItem(row,1,new QTableWidgetItem(QString::number(ite->memoryNeed)));
        externalMemory->setItem(row,2,new QTableWidgetItem(QString::number(ite->tapeNeed)));
        externalMemory->setItem(row,3,new QTableWidgetItem(QString::number(ite->allRunTime)));
        externalMemory->setItem(row,4,new QTableWidgetItem(ite->arrivedTime));
        externalMemory->setItem(row,5,new QTableWidgetItem(QString::number(ite->psa)));
        ++row;
        ++ite;
        if(row > 6)
            break;
    }
}
