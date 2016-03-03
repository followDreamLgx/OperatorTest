#ifndef MYLOCK_H
#define MYLOCK_H


class MyLock
{
public:
    MyLock();
    ~MyLock();
    bool tryLock();
    void unlock();
private:
    int lock;
};

#endif // MYLOCK_H
