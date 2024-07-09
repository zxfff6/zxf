#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int count=0,count2=0;

private slots:
    void timerUpdate(void);
    void timerUpdate2(void);
    void timerUpdate3(void);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
};
#endif // MAINWINDOW_H
