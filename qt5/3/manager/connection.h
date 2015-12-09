#ifndef CONNECTION_H
#define CONNECTION_H

#include <QtSql>
#include <QDebug>
#include "qdom.h"

static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("easybook-3313b0");
    db.setDatabaseName("data.db");
    db.setUserName("aut");
    db.setPassword("7841127");

    if (!db.open())
    {
        return false;
    }

    QSqlQuery query;

    query.exec("create table factory(id varchar primary key, name varchar)");
    query.exec(QString("insert into factory values('0', 'choose fact')"));
    query.exec(QString("insert into factory values('01', 'yiqi dazhong')"));
    query.exec(QString("insert into factory values('02', 'erqi shenlong')"));
    query.exec(QString("insert into factory values('03', 'shanghai dazhong')"));

    query.exec("create table brand(id varchar primary key, name varchar, factory varchar, price int, sum int, sell int, last int)");
    query.exec(QString("insert into brand values('01', 'aodiA6', 'yiqidazhong', 36, 50, 10, 40)"));

    return true;
}

#endif // CONNECTION_H
