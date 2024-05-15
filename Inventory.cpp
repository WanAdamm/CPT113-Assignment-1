#include "INVENTORY.h"
#include <iostream>
#include <fstream>
#include "CAKE.h"
#include "COOKIES.h"
using namespace std;

Inventory::Inventory()
{
    unitSold = 0;
    unitAvailable = 0;

    fstream File("init.txt");

    int cakeIndex = 0, cookieIndex = 0;

    string line, name, type;
    string token;
    float price, weight;

    // skip file header
    getline(File, line);

    while (getline(File, token, ','))
    {
        price = stof(token);
        getline(File, name, ',');
        getline(File, token, ',');
        weight = stof(token);
        getline(File, type, ',');

        if (type == "cake")
        {
            cakes[cakeIndex].setItemName(name);
            cakes[cakeIndex].setPrice(price);
            cakes[cakeIndex].setWeight(weight);
            cakeIndex++;
        }
        else if (type == "cookies")
        {
            cookies[cookieIndex].setItemName(name);
            cookies[cookieIndex].setPrice(price);
            cookies[cookieIndex].setWeight(weight);
            cookieIndex++;
        }
    }

    for (int i = 0; i < Cake::getCakeCount(); i++)
    {
        unitAvailable += cakes[i].getAvailableCount();
    }

    for (int i = 0; i < Cookies::getCookieCount(); i++)
    {
        unitAvailable += cookies[i].getAvailableCount();
    }
}

void Inventory::setInventory(int uS, int uA)
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