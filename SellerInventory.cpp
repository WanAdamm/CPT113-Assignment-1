#include "SELLERINVENTORY.h"
#include <iostream>
using namespace std;
#include <fstream>

SellerInventory::SellerInventory()
{
    // all data of cake and cookies is initialized from init.txt
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
        price = stof(token); // convert string to float

        getline(File, name, ',');

        getline(File, token, ',');
        weight = stof(token); // convert string to float

        getline(File, token, ',');
        availableCount = stoi(token); // convert string to int

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
        // add unitAvailable based on how many cakes there is
        unitAvailable += cakes[i].getAvailableCount();
    }

    for (int i = 0; i < 5; i++)
    {
        // ad unitAvailable based on how many cookies there is
        unitAvailable += cookies[i].getAvailableCount();
    }
}

void SellerInventory::removeItem(int id, int count)
{
    if (id >= 5)
    {
        // remove cookies based on count after buyer has bought from the seller
        cookies[id - 5].subAvailableCount(count);
    }
    else if (id >= 0 && id < 5)
    {
        // remove cakes based on count after buyer has bought from the seller
        cakes[id].subAvailableCount(count);
    }
}

void SellerInventory::printItemAvailable()
{
    // print item available inside the seller inventory 
    for (int i = 0; i < 5; i++)
    {
        cakes[i].printProductInfo();
    }

    for (int i = 0; i < 5; i++)
    {
        cookies[i].printProductInfo();
    }
}

float SellerInventory::getItemPrice(int id) const
{
    // return price based on item id
    float itemPrice = 0;

    if (id >= 5)
    {
        itemPrice = cookies[id - 5].getPrice(); // get the price of item
    }
    else if (id >= 0 && id < 5)
    {
        itemPrice = cakes[id].getPrice(); // get the price of item
    }

    return itemPrice;
}

int SellerInventory::getItemCount(int id) const
{
    // return itemCount based on id
    int itemCount = 0;

    if (id >= 5)
    {
        itemCount = cookies[id - 5].getAvailableCount(); // get count of item
    }
    else if (id >= 0 && id < 5)
    {
        itemCount = cakes[id].getAvailableCount(); // get count of item
    }

    return itemCount;
}