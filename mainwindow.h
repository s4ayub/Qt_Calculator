#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots: //Creating a list of all the methods to use
    void clear();
    void equals();
    void add();
    void sub();
    void multiply();
    void divide();
    void zero();
    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
    void nine();


private:
    QLabel *label;
    QPushButton *clear_button;
    QPushButton *equals_button;
    QPushButton *add_button;
    QPushButton *sub_button;
    QPushButton *multiply_button;
    QPushButton *divide_button;
    QPushButton *zero_button;
    QPushButton *one_button;
    QPushButton *two_button;
    QPushButton *three_button;
    QPushButton *four_button;
    QPushButton *five_button;
    QPushButton *six_button;
    QPushButton *seven_button;
    QPushButton *eight_button;
    QPushButton *nine_button;
};

#endif // MAINWINDOW_H
