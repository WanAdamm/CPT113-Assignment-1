#include "SELLERINVENTORY.h"
#include <iostream>
using namespace std;
#include <fstream>

SellerInventory::SellerInventory()
{
    fstream File("init.csv");

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