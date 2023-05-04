#include "memento.h"


Memento::Memento()
{

}

void Memento::setState(QStringList s)
{
    state = s;
}

QStringList Memento::getState()
{
    return state;
}
