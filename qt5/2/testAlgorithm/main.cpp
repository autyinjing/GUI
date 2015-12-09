#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double aa = -19.3, b = 9.7;
    double c = qAbs(aa);
    int bn = qRound(b);
    int cn = qRound(c);
    qDebug() << "aa = " << aa;
    qDebug() << "b = " << b;
    qDebug() << "c = qAbs(a)" << c;
    qDebug() << "qMax(b, c) = " << qMax(b, c);
    qDebug() << "bn = " << bn;
    qDebug() << "cn = " << cn;
    qSwap(bn, cn);

    qDebug() << "qSwap(bn, cn): " << "bn = " << bn << "cn = " << cn;

    return a.exec();
}
