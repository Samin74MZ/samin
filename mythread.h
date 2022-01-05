#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QObject>

class MYThread : public QThread
{
    Q_OBJECT
public:
    explicit MYThread(QObject *parent = nullptr);
    void run();
    bool Stop;

 signals:
    void NumberChanged(int);

public slots:
};

#endif // MYTHREAD_H
