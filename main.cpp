#include <iostream>
#include "mainwindow.h"
#include <QApplication>
int main(int argc, char* argv[])
{
    QApplication app(argc,argv);

    MainWindow a;
    a.show();

    return app.exec();
}
