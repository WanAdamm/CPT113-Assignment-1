#include "CAKE.h"
#include <iostream>
using namespace std;

int Cake::cakeCount = 0;

Cake::Cake()
{
    cakeCount++; // add to cakeCount which is a static variable of Cake
}

Cake::Cake(float p, float w, int aC) : Product(p, w, aC)
{
    cakeCount++; // add to cakeCount which is a static variable of Cake
}

Cake::~Cake()
{
    cakeCount--; // subtract to cakeCount which is a static variable of Cake
}

int Cake::getCakeCount()
{
    return cakeCount; // getter function of the static variable
}