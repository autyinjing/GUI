#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //fuck,终于可以输入中文了
    MainWindow w;
    w.show();

    return a.exec();
}
