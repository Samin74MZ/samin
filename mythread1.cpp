#include "mythread1.h"
#include <QtCore>

MYThread1::MYThread1(QObject *parent) : QThread(parent)
{

}
void MYThread1::run()
{
int j=0;
        while(!j){
        for(int i=0; i<60;i++)
        {
            QMutex mutex;
            mutex.lock();
            if(this->Stop)break;
            mutex.unlock();

            emit NumberChanged(i);

            this->sleep(60);//to control the speed
        }
        }
 }
