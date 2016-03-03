#include "MyLock.h"

MyLock::MyLock()
{
    lock = 1;
}

MyLock::~MyLock()
{

}
bool MyLock::tryLock()
{
    if(lock > 0)
    {
        --lock;
        return true;
    }
    else if(lock == 0)
        return false;
}

void MyLock::unlock()
{
    if(lock == 0)
        ++lock;
}
