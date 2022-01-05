#ifndef MYTHREAD2_H
#define MYTHREAD2_H

#include <QThread>
#include <QObject>

class MYThread2 : public QThread
{
    Q_OBJECT
public:
    explicit MYThread2(QObject *parent = nullptr);
    void run();
    bool Stop;

 signals:
    void NumberChanged(int);

public slots:

};

#endif // MYTHREAD2_H
