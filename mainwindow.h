#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mythread.h"
#include "mythread1.h"
#include "mythread2.h"
#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    MYThread *mThread;
    MYThread1 *mThread1;
    MYThread2 *mThread2;


private:
    Ui::MainWindow *ui;
public slots:
    void onNumberChanged(int);
    void onMinutChanged(int);
    void onHourChanged(int);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};
#endif // MAINWINDOW_H
