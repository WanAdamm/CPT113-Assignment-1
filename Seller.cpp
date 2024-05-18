#include "SELLER.h"
#include <iostream>
using namespace std;

Seller::Seller()
{
    revenue = 0;
}

void Seller::printSellerInfo()
{
    cout << "Revenue: " << revenue << endl;
}

Seller::Seller(float rev, string n, int t) : Account(n, t)
{
    revenue = rev;
}

float Seller::getRevenue()
{
    return revenue;
}

void Seller::addRevenue(float rev)
{
    revenue += rev;
}

void Seller::subRevenue(float rev)
{
    revenue -= rev;
}

void Seller::printItemAvailable()
{
    inventory.printItemAvailable();
}

void Seller::sellItem(int id, int count)
{
    revenue += count * inventory.getItemPrice(id); // seller will get full revenue, loss because of discount will be bear by the shop
    inventory.removeItem(id, count);
}

float Seller::getItemPrice(int id)
{
    return inventory.getItemPrice(id);
}

int Seller::getItemCount(int id)
{
    return inventory.getItemCount(id);
}