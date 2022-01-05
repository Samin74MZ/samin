#include "mythread2.h"
#include <QtCore>

MYThread2::MYThread2(QObject *parent) : QThread(parent)
{

}
void MYThread2::run()
{
    int j=0;
    while (!j) {
        for(int i=0; i<=12;i++)
        {
            QMutex mutex;
            mutex.lock();
            if(this->Stop)break;
            mutex.unlock();

            emit NumberChanged(i);

            this->sleep(3600);//to control the speed
        }
    }

}
