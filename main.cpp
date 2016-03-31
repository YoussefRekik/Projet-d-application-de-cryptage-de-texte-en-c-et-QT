#include "mainwindow.h"
#include <QtGui>
#include <QWidget>
#include <QDialog>
#include <QApplication>
#include <QtWidgets>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;



    w.show();

    return a.exec();
}
