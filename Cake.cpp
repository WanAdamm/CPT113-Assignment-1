#include "CAKE.h"
#include <iostream>
using namespace std;

int Cake::cakeCount = 0;

Cake::Cake()
{
    cakeCount++;
}

Cake::Cake(string n, float p, float w, int aC):Product(n,p,w,aC)
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