#include "CAKE.h"
#include <iostream>
using namespace std;

int Cake::cakeCount = 0;

Cake::Cake()
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