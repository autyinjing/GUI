#include "testui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testui w;
    w.show();

    return a.exec();
}
