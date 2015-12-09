#include "widget.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
