#include "CAKE.h"
#include <iostream>
using namespace std;

int Cake::cakeCount = 0;

Cake::Cake()
{
    cakeCount++;
}

Cake::Cake(float p, float w, int aC) : Product(p, w, aC)
{
    cakeCount++;
}

Cake::~Cake()
{
    cakeCount--;
}

int Cake::getCakeCount()
{
    return cakeCount;
}