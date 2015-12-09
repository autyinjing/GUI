#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int>  list;
    list << 1 << 2 << 3 << 4 << 5;
    QListIterator<int>  i(list);

    while ( i.hasNext() )
        qDebug() << i.next();

    return a.exec();
}
