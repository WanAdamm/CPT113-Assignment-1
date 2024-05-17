#include "BUYERINVENTORY.h"
#include "CAKE.h"
#include "COOKIES.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

BuyerInventory::BuyerInventory()
{
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

        getline(File, token, ','); // skip available count info;

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
    for (int i = 0; i < 5; i++)
    {
        if (cakes[i].getAvailableCount() > 0)
        {
            cout << cakes[i].getItemName() << ": " << cakes[i].getAvailableCount() << endl;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (cookies[i].getAvailableCount() > 0)
        {
            cout << cookies[i].getItemName() << ": " << cookies[i].getAvailableCount() << endl;
        }
    }

    cout << endl;
}

void BuyerInventory::addItem(int id, int count)
{
    if (id >= 5)
    {
        cookies[id - 5].addAvailableCount(count);
    }
    else if (id >= 0 && id < 5)
    {
        cakes[id].addAvailableCount(count);
    }
}

void BuyerInventory::printInventorySummary()
{
    cout << setw(30) << "Item" << setw(10) << "Count" <<  setw(33) << "Price Per Unit" << setw(21) << "Total Price" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (cakes[i].getAvailableCount() > 0)
        {
            cout << setw(30) <<cakes[i].getItemName();
            cout << setw(10) << cakes[i].getAvailableCount() << setw(30) << "RM " << cakes[i].getPrice() << setw(18) << "RM " << cakes[i].getAvailableCount() * cakes[i].getPrice()<< endl;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (cookies[i].getAvailableCount() > 0)
        {
            cout << setw(30) <<cookies[i].getItemName();
            cout << setw(10) << cookies[i].getAvailableCount() << setw(30) << "RM " << cookies[i].getPrice() << setw(18) << "RM " << cookies[i].getAvailableCount() * cookies[i].getPrice() << endl;
        }
    }

    cout << endl;
}