#include "mythread.h"
#include <QtCore>

MYThread::MYThread(QObject *parent) : QThread(parent)
{

}
void MYThread::run()
{
    int j=0;
    while (!j) {
        for(int i=0; i<60;i++)
        {
            QMutex mutex;
            mutex.lock();
            if(this->Stop)break;
            mutex.unlock();

            emit NumberChanged(i);

            this->sleep(1);//to control the speed

        }
    }

}

