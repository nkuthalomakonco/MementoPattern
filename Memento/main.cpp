#include <QtCore>

#include "person.h"
#include "memento.h"

//Caretaker
int main()
{
    Person person("Name");
    qDebug()<<person.getName();
    //create memento
    Memento Caretaker = person.createMemento();

    //change person
    person.setName("Name changed");
    qDebug()<<person.getName();
    //restore
    person.setMemento(Caretaker);

    qDebug()<<person.getName();


    return 0;
}
