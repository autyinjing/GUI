#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /*QList<int>  list;
    QMutableListIterator<int> i(list);
    for (int j = 0; j < 10; ++j)
        i.insert(j);
    for (i.toFront(); i.hasNext(); )
        qDebug() << i.next();
    for (i.toBack(); i.hasPrevious(); )
    {
        if (i.previous() % 2 == 0) {
            i.remove();
        } else {
            i.setValue(i.peekNext() * 10);
        }
    }

    for ( i.toFront(); i.hasNext(); )
        qDebug() << i.next();

    list << 1 << 2 << 3 << 4 << 5;
    QListIterator<int>  i(list);
    i.toBack();
    while ( i.hasPrevious() )
        qDebug() << i.previous();*/

    QList<int>  list;
    for (int j = 0; j < 10; ++j)
        list.insert(list.end(), j);

    QList<int>::iterator    i;

    for (i = list.begin(); i != list.end(); ++i)
    {
        qDebug() << (*i);
        *i = (*i) * 10;
    }

    QList<int>::const_iterator  ci;

    for (ci = list.constBegin(); ci != list.constEnd(); ++ci)
        qDebug() << *ci;

    return a.exec();
}
