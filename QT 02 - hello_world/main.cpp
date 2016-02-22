#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString hello = "hello there!";   //<-- Qstring is a string method from qCore

    //qDebug() << "hello world";      //<-- is a basic qString function
    qDebug() << hello;

    return a.exec();
}

