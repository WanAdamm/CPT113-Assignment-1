#include "INVENTORY.h"
#include <iostream>
using namespace std;

Inventory::Inventory()
{
    unitSold = 0;
    unitAvailable = 0;
}

Inventory::Inventory(int uS, int uA)
{
    unitSold = uS;
    unitAvailable = uA;
}

int Inventory::getUnitSold()
{
    return unitSold;
}

void Inventory::setUnitSold(int uS)
{
    unitSold = uS;
}

int Inventory::getUnitAvailable()
{
    return unitAvailable;
}

void Inventory::setUnitAvailable(int uA)
{
    unitAvailable = uA;
}

void Inventory::addUnitSold(int uS)
{
    unitSold += uS;
}

void Inventory::subUnitSold(int uS)
{
    unitSold -= uS;
}

void Inventory::addUnitAvailable(int uA)
{
    unitAvailable += uA;
}

void Inventory::subUnitAvailable(int uA)
{
    unitAvailable -= uA;
}

