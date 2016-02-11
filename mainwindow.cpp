#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/QCoreApplication>

QString value = "", total = "";
int fNum, sNum;
bool addBool = false, subtractBool = false, multiplyBool = false, divideBool = false;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    label = new QLabel("0", this);
    label -> setGeometry(QRect(QPoint(75,25), QSize(50,200)));

    clear_button = new QPushButton("C", this);
    clear_button -> setGeometry(QRect(QPoint(125,300), QSize(50,50)));
    connect(clear_button, SIGNAL(released()), this, SLOT(clear())); //runs clear method when button is released

    equals_button = new QPushButton("=", this);
    equals_button -> setGeometry(QRect(QPoint(175,300), QSize(50,50)));
    connect(equals_button, SIGNAL(released()), this, SLOT(equals())); 

    add_button = new QPushButton("+", this);
    add_button -> setGeometry(QRect(QPoint(225,150), QSize(50,50)));
    connect(add_button, SIGNAL(released()), this, SLOT(add())); 

    sub_button = new QPushButton("-", this);
    sub_button -> setGeometry(QRect(QPoint(225,200), QSize(50,50)));
    connect(sub_button, SIGNAL(released()), this, SLOT(sub())); 

    multiply_button = new QPushButton("X", this);
    multiply_button -> setGeometry(QRect(QPoint(225,250), QSize(50,50)));
    connect(multiply_button, SIGNAL(released()), this, SLOT(multiply())); 

    divide_button = new QPushButton("/", this);
    divide_button -> setGeometry(QRect(QPoint(225,300), QSize(50,50)));
    connect(divide_button, SIGNAL(released()), this, SLOT(divide())); 

    zero_button = new QPushButton("0", this);
    zero_button -> setGeometry(QRect(QPoint(75,300), QSize(50,50)));
    connect(zero_button, SIGNAL(released()), this, SLOT(zero())); 

    one_button = new QPushButton("1", this);
    one_button -> setGeometry(QRect(QPoint(75,250), QSize(50,50)));
    connect(one_button, SIGNAL(released()), this, SLOT(one())); 

    two_button = new QPushButton("2", this);
    two_button -> setGeometry(QRect(QPoint(125,250), QSize(50,50)));
    connect(two_button, SIGNAL(released()), this, SLOT(two())); 

    three_button = new QPushButton("3", this);
    three_button -> setGeometry(QRect(QPoint(175,250), QSize(50,50)));
    connect(three_button, SIGNAL(released()), this, SLOT(three())); 

    four_button = new QPushButton("4", this);
    four_button -> setGeometry(QRect(QPoint(75,200), QSize(50,50)));
    connect(four_button, SIGNAL(released()), this, SLOT(four())); 

    five_button = new QPushButton("5", this);
    five_button -> setGeometry(QRect(QPoint(125,200), QSize(50,50)));
    connect(five_button, SIGNAL(released()), this, SLOT(five())); 

    six_button = new QPushButton("6", this);
    six_button -> setGeometry(QRect(QPoint(175,200), QSize(50,50)));
    connect(six_button, SIGNAL(released()), this, SLOT(six())); 

    seven_button = new QPushButton("7", this);
    seven_button -> setGeometry(QRect(QPoint(75,150), QSize(50,50)));
    connect(seven_button, SIGNAL(released()), this, SLOT(seven()));

    eight_button = new QPushButton("8", this);
    eight_button -> setGeometry(QRect(QPoint(125,150), QSize(50,50)));
    connect(eight_button, SIGNAL(released()), this, SLOT(eight())); 

    nine_button = new QPushButton("9", this);
    nine_button -> setGeometry(QRect(QPoint(175,150), QSize(50,50)));
    connect(nine_button, SIGNAL(released()), this, SLOT(nine())); 

}
void MainWindow::clear(){
    value = "";
    label -> setText(value);
//This function ensures that the label is set to blank
}
void MainWindow:: equals(){
    sNum = value.toInt();
    if (addBool){
        total = QString::number(fNum+sNum);
        label->setText(total);
        value = "";
    }
    if (subtractBool) {
        total = QString::number(fNum-sNum);
        label->setText(total);
        value = "";
    }
    if (multiplyBool) {
        total = QString::number(fNum*sNum);
        label->setText(total);
        value = "";

    }
    if (divideBool) {
        total = QString::number(fNum/sNum);
        label->setText(total);
        value = "";
    }
}
void MainWindow::add(){

    fNum = value.toInt(); //setting the string = to int
    value = ""; //value clears to type in next number
    label ->setText(value);
    addBool = true;
}
void MainWindow::sub(){
    fNum = value.toInt(); //setting the string = to int
    value = ""; //value clears to type in next number
    label ->setText(value);
    subtractBool = true;

}
void MainWindow::multiply(){
    fNum = value.toInt(); //setting the string = to int
    value = ""; //value clears to type in next number
    label ->setText(value);
    multiplyBool = true;
}
void MainWindow::divide(){
    fNum = value.toInt(); //setting the string = to int
    value = ""; //value clears to type in next number
    label ->setText(value);
    divideBool = true;
}
void MainWindow::zero(){
    value = value + "0";
    label -> setText(value);
}
void MainWindow::one(){
    value = value + "1";
    label -> setText(value);
}
void MainWindow::two(){
    value = value + "2";
    label -> setText(value);
}
void MainWindow::three(){
    value = value + "3";
    label -> setText(value);
}
void MainWindow::four(){
    value = value + "4";
    label -> setText(value);
}
void MainWindow::five(){
    value = value + "5";
    label -> setText(value);
}
void MainWindow::six(){
    value = value + "6";
    label -> setText(value);
}
void MainWindow::seven(){
    value = value + "7";
    label -> setText(value);
}
void MainWindow::eight(){
    value = value + "8";
    label -> setText(value);
}
void MainWindow::nine(){
    value = value + "9";
    label -> setText(value);
}
MainWindow::~MainWindow()
{
}
