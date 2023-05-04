#ifndef MEMENTO_H
#define MEMENTO_H

#include <QStringList>

class Memento
{

public:

private:
    friend class Person;
    Memento();
    void setState(QStringList);
    QStringList getState();

    QStringList state;
};
#endif // MEMENTO_H
