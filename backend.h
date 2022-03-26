#ifndef BACKEND_H
#define BACKEND_H

#include "class1.h"
#include "class2.h"

class Backend
{
public:
    Backend();
    ~Backend();
private:
    Class1 *c1;
    Class2 *c2;
};

#endif // BACKEND_H
