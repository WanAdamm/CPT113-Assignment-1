#include "BUYERINVENTORY.h"
#include "CAKE.h"
#include "COOKIES.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

ostream &operator<<(ostream &out, const BuyerInventory &inventory)
{
    out << setw(30) << "Item" << setw(10) << "Count" << setw(33) << "Price Per Unit" << setw(21) << "Total Price" << endl;

    for (int i = 0; i < 5; i++)
    {
        if (inventory.cakes[i].getAvailableCount() > 0) // check if buyer has bought that particular cakes 
        {
            out << setw(30) << inventory.cakes[i].getItemName();
            out << setw(10) << inventory.cakes[i].getAvailableCount() << setw(30) << "RM " << inventory.cakes[i].getPrice() << setw(18) << "RM " << inventory.cakes[i].getAvailableCount() * inventory.cakes[i].getPrice() << endl;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (inventory.cookies[i].getAvailableCount() > 0) //  check if buyer has bought that particular cookies
        {
            out << setw(30) << inventory.cookies[i].getItemName();
            out << setw(10) << inventory.cookies[i].getAvailableCount() << setw(30) << "RM " << inventory.cookies[i].getPrice() << setw(18) << "RM " << inventory.cookies[i].getAvailableCount() * inventory.cookies[i].getPrice() << endl;
        }
    }

    out << endl;

    return out;
}

BuyerInventory::BuyerInventory()
{
    // for every inventory it would be initialize with data from init.txt
    fstream File("init.txt");

    int cakeIndex = 0, cookieIndex = 0;

    string line, name, type;
    string token;
    float price, weight;

    // skip file header
    getline(File, line);

    while (getline(File, token, ','))
    {
        price = stof(token); // convert string to float

        getline(File, name, ',');

        getline(File, token, ',');
        weight = stof(token); // convert string to float

        getline(File, token, ','); // skip available count info;

        getline(File, type, ',');

        // check for type data from the input files
        if (type == "cake")
        {
            // using  function of product
            cakes[cakeIndex].setItemName(name);
            cakes[cakeIndex].setPrice(price);
            cakes[cakeIndex].setWeight(weight);
            cakes[cakeIndex].setAvailableCount(0); // buyer starts with no item
            cakeIndex++;
        }
        else if (type == "cookies")
        {
            // using setter function of product
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
    // iterate through all cookies and cakes in the inventory and print the details
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
    // takes in the id and count of item needed to be added


    if (id >= 5 && id <= 9)// check if the id match id 5-9 is reserve for cookies
    {
        cookies[id - 5].addAvailableCount(count); // add the cookies to buyer inventory
    }
    else if (id >= 0 && id < 5) // id 0-4 is reserved for cakes
    {
        cakes[id].addAvailableCount(count); // add the cakes to buyer inventory
    }
}