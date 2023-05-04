#ifndef PERSON_H
#define PERSON_H
#include "memento.h"

class Person
{

public:
    Person(QString);
    void setMemento(Memento);
    Memento createMemento()const;
    QString getName()const;
    void setName(QString);
private:
    QString name;

};

#endif // PERSON_H
