#include "Block.h"
#include<QDateTime>

bool FCFSCompare(const Block&fir,const Block&sec)
{
    bool ret = fir.arrivedDateTime < sec.arrivedDateTime ;
    return ret;
}
bool SJFCompare(const Block&fir,const Block&sec)
{
    return fir.allRunTime < sec.allRunTime;
}

bool PSACompare(const Block&fir,const Block&sec)
{
    return fir.psa < sec.psa;
}

Block::Block()
{
    memoryNeed = ((int)qrand()) % 20 + 2;
    tapeNeed = ((int)qrand()) % 2 + 1;
    arrivedDateTime = QDateTime::currentDateTime();
    arrivedTime = arrivedDateTime.toString("hh:mm:ss");
    runTime = 0;
    allRunTime = ((int)qrand()) % 100 + 50;
    name = arrivedDateTime.toString();
    psa = ((int)qrand() % 20);//优先级
}
Block::~Block()
{

}
const Block& Block::operator=(const Block& para)
{
    name = para.name;
    memoryNeed = para.memoryNeed;
    tapeNeed = para.tapeNeed;
    allRunTime = para.allRunTime;
    runTime = para.runTime;
    arrivedTime = para.arrivedTime;
    timeCount = para.timeCount;
    arrivedDateTime = para.arrivedDateTime;
    psa = para.psa;
    return *this;
}

bool Block::operator<(const Block& para)
{
    return this->allRunTime < para.allRunTime;
}
bool Block::IsComplete()
{
    runTime++;
    if(runTime > allRunTime)
        return true;
    else
        return false;
}

void Block::Running()
{
    int timeDiff = timeCount.elapsed();
    timeDiff = timeDiff / 1000;//换算为秒
    if(timeDiff > 0)
    {
        runTime += timeDiff;
        timeCount.restart();
    }
}
