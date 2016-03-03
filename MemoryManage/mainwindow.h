#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QTime>

class MemoryBlock
{
public:
    MemoryBlock(int beginPara);
    MemoryBlock();
    //MemoryBlock(QVector<MemoryBlock>::iterator);
    const MemoryBlock& operator=(const MemoryBlock&);
    const MemoryBlock& operator+(const MemoryBlock&);
    void NewBlockToBeUsed(const MemoryBlock&);
    bool IsComplete();
    void Init(int);

    int size;
    int begin;
    bool isUsed;
    int timeUse;
    float timeRun;
    QTime timeCount;
};
typedef enum
{
    FIRSTFIT,LOOPFIT,WORST
}AllocateType;
#include <QMainWindow>
#include<QVector>

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void Init();
    ~MainWindow();
    void timerEvent(QTimerEvent *event);

private slots:
    void on_FirstFit_clicked();

    void on_LoopFit_clicked();

    void on_Worst_clicked();

private:
    void AllocateMemory();
    void FirstFitAllocate();
    void LoopFitAllocate();
    void WorstAllocate();
    void SetQuestTable();
    void SetMemoryTable();
    void MergeMemory();
    void GiveMemory(QVector<MemoryBlock>::iterator ite, const MemoryBlock &theQuest);
    QVector<MemoryBlock>::iterator FindBiggest();
    void Recovery();
    void CreateQuest();
private:
    Ui::MainWindow *ui;
    QVector<MemoryBlock> memory;
    QVector<MemoryBlock> quest;
    AllocateType allocateType;
    int row;
    QTime timeCount;
    QTime creQueTimeCount;
};

#endif // MAINWINDOW_H
