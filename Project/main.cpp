#include "mainwindow.h"
#include <QApplication>

/********************************************//**
 *  The overarching primary functionality.
 ***********************************************/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
