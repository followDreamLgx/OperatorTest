#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Init();
    QObject::startTimer(1);
    creQueTimeCount.start();
}
void MainWindow::Init()
{
    memory.clear();
    quest.clear();
    row = ui->Memory->rowCount();
    int addBegin = 0;
    for(int i = 0;i < row;++i)
    {
        MemoryBlock temp(addBegin);
        addBegin += temp.size;
        memory.push_back(temp);
        MemoryBlock memoryQuest(0);
        quest.push_back(memoryQuest);
    }
    timeCount.start();
    allocateType = FIRSTFIT;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::AllocateMemory()
{
    if(timeCount.elapsed() < 3000)
        return;
    timeCount.restart();
    switch (allocateType)
    {
    case FIRSTFIT:
        FirstFitAllocate();
        break;
    case LOOPFIT:
        LoopFitAllocate();
        break;
    case WORST:
        WorstAllocate();
        break;
    }
}
void MainWindow::GiveMemory(QVector<MemoryBlock>::iterator ite,const MemoryBlock & theQuest)
{
    if(ite->size > theQuest.size)
    {
        ite->size -= theQuest.size;
        MemoryBlock newBlock(ite->begin);
        newBlock.NewBlockToBeUsed(theQuest);
        ite->begin += theQuest.size;
        ite = memory.insert(ite,newBlock);
        ite->timeCount.start();
    }
    else if(ite->size == theQuest.size)
    {
        ite->NewBlockToBeUsed(theQuest);
        ite->timeCount.start();
    }
    quest.pop_front();
}

void MainWindow::FirstFitAllocate()
{
    if(quest.isEmpty() == false)
    {
        MemoryBlock theQuest = quest.front();
        QVector<MemoryBlock>::iterator ite = memory.begin();
        for(;ite != memory.end();++ite)
        {
            if((ite->isUsed == false) && (ite->size >= theQuest.size))
            {
                GiveMemory(ite,theQuest);
                return;
            }

        }
    }
}

void MainWindow::LoopFitAllocate()
{
    static QVector<MemoryBlock>::iterator staIte = memory.begin();
    if(quest.isEmpty() == false)
    {
        MemoryBlock theQuest = quest.front();
        QVector<MemoryBlock>::iterator beginIte = staIte;
        do
        {
            if((staIte->isUsed == false) && (staIte->size >= theQuest.size))
            {
                GiveMemory(staIte,theQuest);
                return;
            }
        }while(staIte != beginIte);
    }
}
QVector<MemoryBlock>::iterator MainWindow::FindBiggest()
{
    if(memory.isEmpty() == true)
        return memory.end();
    QVector<MemoryBlock>::iterator big,temp;
    big = temp = memory.begin();
    temp++;
    while(temp != memory.end())
    {
        if((temp->isUsed == false) && (temp->size > big->size))
            big = temp;
        temp++;
    }
    if(big->isUsed == true)
        return memory.end();
    else
        return big;
}

void MainWindow::WorstAllocate()
{
    QVector<MemoryBlock>::iterator big = FindBiggest();
    if(big != memory.end())
    {
        if(big->size >= quest.front().size)
            GiveMemory(big,quest.front());
    }
}

void MainWindow::SetQuestTable()
{
    ui->Quest->clearContents();
    QVector<MemoryBlock>::iterator ite = quest.begin();
    for(int i = 0;(i < row) && (ite != quest.end());++i,++ite)
    {
        ui->Quest->setItem(i,0,new QTableWidgetItem(QString::number(ite->size)));
    }
}
void MainWindow::SetMemoryTable()
{
    ui->Memory->clearContents();
    QVector<MemoryBlock>::iterator ite = memory.begin();
    for(int i = 0;(i < row) && (ite != memory.end()); ++i,++ite)
    {
        ui->Memory->setItem(i,0,new QTableWidgetItem(QString::number(ite->begin)));
        ui->Memory->setItem(i,1,new QTableWidgetItem(QString::number(ite->size)));
        if(ite->isUsed == false)
            ui->Memory->setItem(i,2,new QTableWidgetItem("false"));
        else
            ui->Memory->setItem(i,2,new QTableWidgetItem("true"));
        if(ite->isUsed == true)
        {
            ui->Memory->setItem(i,3,new QTableWidgetItem(QString::number(ite->timeUse)));
            ui->Memory->setItem(i,4,new QTableWidgetItem(QString::number(ite->timeRun)));
        }
    }
}
void MainWindow::MergeMemory()
{
   QVector<MemoryBlock>::iterator ite = memory.begin();
   QVector<MemoryBlock>::iterator next = ite + 1;
   while(next != memory.end())
   {
       if((ite->isUsed == false) &&(next->isUsed == false))
       {
            ite->size += next->size;
            next = memory.erase(next);
       }
       else
       {
           ite++;
           next++;
       }
   }
}
void MainWindow::Recovery()
{
    QVector<MemoryBlock>::iterator ite = memory.begin();
    while(ite != memory.end())
    {
        if(ite->IsComplete() == true)
            ite->isUsed = false;
        ite++;
    }
}
void MainWindow::CreateQuest()
{
    if(creQueTimeCount.elapsed() > 4000)
    {
        MemoryBlock temp;
        quest.push_back(temp);
        creQueTimeCount.restart();
    }
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    Recovery();
    AllocateMemory();
    SetMemoryTable();
    SetQuestTable();
    MergeMemory();
    CreateQuest();
}

//----------------------------------------------------------------------
MemoryBlock::MemoryBlock(int beginPara)
{
    Init(beginPara);
}

void MemoryBlock::Init(int beginPara)
{
    begin = beginPara;
    size = qrand() % 100;
    isUsed = false;
    timeUse = qrand() % 20;
}

MemoryBlock::MemoryBlock()
{
    Init(0);
}

const MemoryBlock& MemoryBlock::operator=(const MemoryBlock&para)
{
    size = para.size;
    begin = para.begin;
    isUsed = para.isUsed;
    timeUse = para.timeUse;
    timeRun = para.timeRun;
    return *this;
}
const MemoryBlock& MemoryBlock::operator+(const MemoryBlock&para)
{
    if(this->isUsed == false)
        if(para.isUsed == false)
            size += para.size;
    return *this;
}
void MemoryBlock::NewBlockToBeUsed(const MemoryBlock&para)
{
    size = para.size;
    isUsed = true;
    timeRun = 0;
    timeUse = para.timeUse;
    timeCount.start();
}

bool MemoryBlock::IsComplete()
{
    if(isUsed == false)
        return true;
    int diff = timeCount.elapsed() / 1000;
    int temp = timeRun + diff;
    if(temp > timeRun)
    {
        timeRun = temp;
        timeCount.restart();
    }
    return timeRun > timeUse;
}

void MainWindow::on_FirstFit_clicked()
{
    allocateType = FIRSTFIT;
    Init();
}

void MainWindow::on_LoopFit_clicked()
{
    allocateType = LOOPFIT;
    Init();
}

void MainWindow::on_Worst_clicked()
{
    allocateType = WORST;
    Init();
}
