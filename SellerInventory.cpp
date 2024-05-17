#include "SELLERINVENTORY.h"
#include <iostream>
using namespace std;
#include <fstream>

SellerInventory::SellerInventory()
{
    fstream File("init.txt");

    int cakeIndex = 0, cookieIndex = 0;

    string line, name, type;
    string token;
    float price, weight;
    int availableCount;

    // skip file header
    getline(File, line);

    while (getline(File, token, ','))
    {
        price = stof(token);

        getline(File, name, ',');

        getline(File, token, ',');
        weight = stof(token);

        getline(File, token, ',');
        availableCount = stoi(token);

        getline(File, type, ',');

        if (type == "cake")
        {
            cakes[cakeIndex].setItemName(name);
            cakes[cakeIndex].setPrice(price);
            cakes[cakeIndex].setWeight(weight);
            cakes[cakeIndex].setAvailableCount(availableCount);
            cakeIndex++;
        }
        else if (type == "cookies")
        {
            cookies[cookieIndex].setItemName(name);
            cookies[cookieIndex].setPrice(price);
            cookies[cookieIndex].setWeight(weight);
            cookies[cookieIndex].setAvailableCount(availableCount);
            cookieIndex++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        unitAvailable += cakes[i].getAvailableCount();
    }

    for (int i = 0; i < 5; i++)
    {
        unitAvailable += cookies[i].getAvailableCount();
    }
}

void SellerInventory::removeItem(int id, int count)
{
    if(id >= 5)
    {
        cookies[id-5].subAvailableCount(count);
    }
    else if(id >= 0 && id < 5)
    {
        cakes[id].subAvailableCount(count);
    }
}

void SellerInventory::setInventory(int uS)
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

int SellerInventory::getUnitSold()
{
    return unitSold;
}

void SellerInventory::setUnitSold(int uS)
{
    unitSold = uS;
}

int SellerInventory::getUnitAvailable()
{
    return unitAvailable;
}

void SellerInventory::setUnitAvailable(int uA)
{
    unitAvailable = uA;
}

void SellerInventory::addUnitSold(int uS)
{
    unitSold += uS;
}

void SellerInventory::addUnitAvailable(int uA)
{
    unitAvailable += uA;
}

void SellerInventory::subUnitAvailable(int uA)
{
    unitAvailable -= uA;
}

void SellerInventory::printItemAvailable()
{
    for (int i = 0; i < 5; i++)
    {
        cakes[i].printProductInfo();
        cout << "available count: " << cakes[i].getAvailableCount() << endl << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cookies[i].printProductInfo();
        cout << "available count: " << cookies[i].getAvailableCount() << endl << endl;
    }
}

float SellerInventory::getItemPrice(int id)
{
    float itemPrice = 0;

    if(id >= 5)
    {
        itemPrice = cookies[id-5].getPrice();
    }
    else if(id >= 0 && id < 5)
    {
        itemPrice = cakes[id].getPrice();
    }

    return itemPrice;
}