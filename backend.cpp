#include "backend.h"

Backend::Backend()
{
    c1 = new Class1;
    c2 = new Class2;

    QObject::connect(c1, SIGNAL(sendSignal1(int)), c2, SLOT(receiveSignal1(int))); //connecting sendSignal1 signal (Class1) to receiveSignal1 slot (Class2)


    //Showing class UIs
    c1->show();
    c2->show();
}

Backend::~Backend() //avoid memory leaks
{
    delete c1;
    delete c2;
}
