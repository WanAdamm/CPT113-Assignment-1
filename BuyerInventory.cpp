#include "BUYERINVENTORY.h"
#include "CAKE.h"
#include "COOKIES.h"
#include <iostream>
#include <fstream>
using namespace std;

BuyerInventory::BuyerInventory()
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

        getline(File, token, ','); //skip available count line;

        getline(File, type, ',');

        if (type == "cake")
        {
            cakes[cakeIndex].setItemName(name);
            cakes[cakeIndex].setPrice(price);
            cakes[cakeIndex].setWeight(weight);
            cakes[cakeIndex].setAvailableCount(0); // buyer starts with no item
            cakeIndex++;
        }
        else if (type == "cookies")
        {
            cookies[cookieIndex].setItemName(name);
            cookies[cookieIndex].setPrice(price);
            cookies[cookieIndex].setWeight(weight);
            cookies[cookieIndex].setAvailableCount(0); // buyer starts with no item
            cookieIndex++;
        }
    }
}

void BuyerInventory::printItemAvailable()
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