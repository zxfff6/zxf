#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qtimer.h"//timer
#include "qdatetime.h"//current time


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timerUpdate();



    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer->start(1000);


}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::timerUpdate(void)
{
    QDateTime time=QDateTime::currentDateTime();
    QString str=time.toString("hh.mm.ss");
    ui->label->setText(str);
}
void MainWindow::timerUpdate2(void)
{
    count += 1;
   QString display;
    int a,b,c;
        a=count/3600;
        b=(count-3600*a)/60;
        c=count-3600*a-60*b;
        display=QString("%1,%2,%3").arg(a).arg(b).arg(c);
        ui->label_2->setText(display);
}

void MainWindow::on_pushButton_clicked()
{
    QTimer *timer2=new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(timerUpdate2()));
    timer2->start(1000);
}

void MainWindow::timerUpdate3(void)
{
    count2 += 1;
    QString display;
    int a,b,c;
    a=count2/3600;
    b=(count2-3600*a)/60;
    c=count2-3600*a-60*b;
    display=QString("%1,%2,%3").arg(a).arg(b).arg(c);
    ui->label_3->setText(display);
}

void MainWindow::on_pushButton_2_clicked()
{
    QTimer *timer3=new QTimer(this);
    connect(timer3,SIGNAL(timeout()),this,SLOT(timerUpdate3()));
    timer3->start(1000);
}

