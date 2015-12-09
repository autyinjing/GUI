#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Create map and insert data
    QMap<QString, QString>  map;
    map.insert("beijing", "111");
    map.insert("shanghai", "021");
    map.insert("nanjing", "025");

/*    //Use iterator
    QMapIterator<QString, QString>  i(map);
    while ( i.hasNext() )
        qDebug() << " " << i.key() << " " << i.next().value();

    //Use mutableIterator
    QMutableMapIterator<QString, QString>   mi(map);
    if ( mi.findNext("111") )
        mi.setValue("010");

    QMapIterator<QString, QString>   modi(map);
    qDebug() << " ";
    while ( modi.hasNext() )
        qDebug() << " " << modi.key() << " " << modi.next().value();
*/
    QMap<QString, QString>::const_iterator  i;
    for (i = map.constBegin(); i != map.end(); ++i)
        qDebug() << " " << i.key() << " " << i.value();

    QMap<QString, QString>::iterator    mi;
    mi = map.find("beijing");
    if ( mi != map.end() )
        mi.value() = "010";

    QMap<QString, QString>::const_iterator  modi;
    qDebug() << " ";
    for (modi = map.constBegin(); modi != map.constEnd(); ++modi)
        qDebug() << " " << modi.key() << " " << modi.value();

    return a.exec();
}
