#ifndef BLOCK_H
#define BLOCK_H
#include<QString>
#include<QTime>

typedef enum{
    FCFS,
    SJF,
    PSA,     //优先级
    TURN,
}ManageType;
typedef enum
{
    SINGLESYS,MUTIPASSSYS
}SystermType;

class Block
{
public:
    Block();
    ~Block();
    const Block& operator=(const Block&);
    bool operator<(const Block&);
    bool IsComplete();
    void Running();
public:
    QString name;
    int memoryNeed;
    int tapeNeed;
    int allRunTime;
    int runTime;
    QString arrivedTime;
    QTime timeCount;
    QDateTime arrivedDateTime;
    int psa;
};
bool FCFSCompare(const Block&,const Block&);
bool SJFCompare(const Block&,const Block&);
bool PSACompare(const Block&,const Block&);

#endif // BLOCK_H
