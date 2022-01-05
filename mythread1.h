#ifndef MYTHREAD1_H
#define MYTHREAD1_H

#include <QThread>
#include <QObject>

class MYThread1 : public QThread
{
    Q_OBJECT
public:
    explicit MYThread1(QObject *parent = nullptr);
    void run();
    bool Stop;

 signals:
    void NumberChanged(int);

public slots:
};

#endif // MYTHREAD1_H
