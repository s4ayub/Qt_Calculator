#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget> //include to fix location of calculator
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized(); //allows to customize size of calculator
    w.setFixedSize(300,400);
    w.move(QApplication::desktop()->screen()->rect().center()- w.rect().center()); //this line of code allows the calculator to appear in the center of the screen
    w.show();


    return a.exec();
}
