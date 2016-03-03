
#include "ProcessControl.h"
#include<QMutexLocker>
#include<algorithm>
#include<QDebug>
ProcessControl::ProcessControl(MyLock &proMutexPara, MyLock &jobMutexBPara,
                               QVector<Block> &proPara,int &memoryNumPara, int &tapeNumPara):
    proMutex(proMutexPara),jobMutexB(jobMutexBPara),
    pro(proPara),memoryNum(memoryNumPara),tapeNum(tapeNumPara)
{
    manaType = FCFS;//默认的调度方式
}

ProcessControl::~ProcessControl()
{

}

void ProcessControl::Init(QTableWidget *&memoryWidgetPara)
{
    stopped = false;
    memoryWidget = memoryWidgetPara;
}
void ProcessControl::ChangeMemory()
{
    memoryWidget->clearContents();
    QVector<Block>::iterator ite = pro.begin();
    int row = 0;
    while(ite != pro.end())
    {
        memoryWidget->setItem(row,0,new QTableWidgetItem(ite->name));
        memoryWidget->setItem(row,1,new QTableWidgetItem(QString::number(ite->memoryNeed)));
        memoryWidget->setItem(row,2,new QTableWidgetItem(QString::number(ite->tapeNeed)));
        memoryWidget->setItem(row,3,new QTableWidgetItem(QString::number(ite->allRunTime)));
        memoryWidget->setItem(row,4,new QTableWidgetItem(QString::number(ite->runTime)));
        memoryWidget->setItem(row,5,new QTableWidgetItem(QString::number(ite->psa)));
        ++row;
        ++ite;
        if(row > 6)
            break;
    }
}
//进程调度
void ProcessControl::run()
{
    if(pro.isEmpty() == false)
    {   //更新进程的计时器
        if(manaType == TURN)
        {
            if(here != pro.end())
            {
                if(here->IsComplete() == true)
                {
                    memoryNum += here->memoryNeed;
                    tapeNum += here->tapeNeed;
                    here = pro.erase(here);
                }
                else
                    ++here;
            }
            else
            {
                here = pro.begin();
                if(here->IsComplete() == true)
                {
                    memoryNum += here->memoryNeed;
                    tapeNum += here->tapeNeed;
                    here = pro.erase(here);
                }
                else
                    ++here;
            }
            if(here != pro.end() && pro.isEmpty() == false)
                here->timeCount.restart();
            ChangeMemory();
        }
        else//不是时间片轮转
        {
            if(pro.begin()->IsComplete() == false)//获取到了运行的权利，运行完一个程序
            {
                ChangeMemory();
                return;
            }
            else
            {   //进程已经结束
                memoryNum += pro.begin()->memoryNeed;//将运行完的程序回收
                tapeNum+= pro.begin()->tapeNeed;
                pro.pop_front();
                ChangeMemory();
                if(pro.isEmpty() == false)//开始下一个进程
                    pro.begin()->timeCount.restart();
            }
        }
    }
}
void ProcessControl::Stop()
{
    stopped = true;
}
void ProcessControl::ClearWindow()
{
    int row = 0,column = 0;
    while(row < 7)
    {
        column = 0;
        while(column < 5)
        {
            memoryWidget->setItem(row,column,new QTableWidgetItem(""));
            column++;
        }
        row++;
    }
}
void ProcessControl::SetManageType(ManageType para)
{
    manaType = para;
    here = pro.begin();
}
