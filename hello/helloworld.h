#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QWidget>

class HelloWorld : public QWidget
{
    Q_OBJECT

public:
    HelloWorld(QWidget *parent = 0);
    ~HelloWorld();
};

#endif // HELLOWORLD_H
