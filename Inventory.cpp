#include "INVENTORY.h"
#include <iostream>
#include "CAKE.h"
#include "COOKIES.h"
using namespace std;

Inventory::Inventory()
{
    unitSold = 0;
    unitAvailable = 0;
}

void Inventory::setInventory(int uS)
{
    unitSold = 0;
    unitAvailable = 0;

    for (int i = 0; i < Cake::getCakeCount(); i++)
    {
        unitAvailable += cakes[i].getAvailableCount();
    }

    for (int i = 0; i < Cookies::getCookieCount(); i++)
    {
        unitAvailable += cookies[i].getAvailableCount();
    }
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

void Inventory::printProductAvailable()
{
    for (int i = 0; i << Cake::getCakeCount(); i++)
    {
        cakes[i].printProductInfo();
        cout << "available count: " << cakes[i].getAvailableCount() << endl;
    }

    for (int i = 0; i << Cookies::getCookieCount(); i++)
    {
        cookies[i].printProductInfo();
        cout << "available count: " << cookies[i].getAvailableCount() << endl;
    }
}