#include "backend.h"

Backend::Backend()
{
    c1 = new Class1;
    c2 = new Class2;

    QObject::connect(c1, SIGNAL(sendSignal1(int)), c2, SLOT(receiveSignal1(int)));

    c1->show();
    c2->show();
}

Backend::~Backend()
{
    delete c1;
    delete c2;
}
