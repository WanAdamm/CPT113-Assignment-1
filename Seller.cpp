#include "SELLER.h"
#include <iostream>
using namespace std;

Seller::Seller()
{
    // initialize revenue to 0
    revenue = 0;
}

void Seller::printSellerInfo()
{
    // print revenue of seller
    cout << "Revenue: " << revenue << endl;
}

Seller::Seller(float rev, string n, int t) : Account(n, t) // passing name and type into base class constructor
{
    // initialize revenue to value passed into the constructr
    revenue = rev;
}

float Seller::getRevenue() const
{
    // return revene
    return revenue;
}

void Seller::addRevenue(float rev)
{
    // add to revenue by value passed to function
    revenue += rev;
}

void Seller::subRevenue(float rev)
{
    // subtract to revenue by value passed to function
    revenue -= rev;
}

void Seller::printItemAvailable()
{
    // print item inside the seller inventory
    inventory.printItemAvailable();
}

void Seller::sellItem(int id, int count)
{
    revenue += count * inventory.getItemPrice(id); // seller will get full revenue, loss because of discount will be bear by the shop
    inventory.removeItem(id, count);
}

float Seller::getItemPrice(int id) const
{
    // return the itemPrice
    return inventory.getItemPrice(id);
}

int Seller::getItemCount(int id) const
{
    // return the itemCount
    return inventory.getItemCount(id);
}