#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCore>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mThread =new MYThread(this);
    connect(mThread,SIGNAL(NumberChanged(int)),this,SLOT(onNumberChanged(int)));
    mThread1 = new MYThread1(this);
    connect(mThread1,SIGNAL(NumberChanged(int)),this,SLOT(onMinutChanged(int)));
    mThread2 = new MYThread2(this);
    connect(mThread2,SIGNAL(NumberChanged(int)),this,SLOT(onHourChanged(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::onNumberChanged(int Number)
{
    ui->label->setText(QString::number(Number));
}

void MainWindow::onMinutChanged(int Minute)
{
    ui->lableM->setText(QString::number(Minute));
}

void MainWindow::onHourChanged(int Hour)
{
    ui->labelH->setText(QString::number(Hour));
}
void MainWindow::on_pushButton_clicked()
{
    //Started
    mThread->start();
    mThread1->start();
    mThread2->start();
}


void MainWindow::on_pushButton_2_clicked()
{
    //Stopped
    mThread->Stop =true;
    mThread1->Stop=true;
    mThread2->Stop=true;

}
