#include "person.h"
#include "memento.h"


Person::Person(QString n): name(n)
{

}

void Person::setMemento(Memento m)
{
     QStringList s = m.getState();
     name = s.at(0);
}

Memento Person::createMemento() const
{
    QStringList state;
    state << name;

    Memento mem;
    mem.setState(state);
    return mem;
}

QString Person::getName() const
{
    return name;
}

void Person::setName(QString n)
{
    name = n;
}
