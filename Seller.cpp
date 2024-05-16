#include "SELLER.h"
#include <iostream>
using namespace std;

Seller::Seller()
{
    revenue = 0;
    inventory.setInventory(0);
}

Seller::Seller(float rev)
{
    revenue = rev;
    inventory.setInventory(0);
}

void Seller::printSellerInfo()
{
    cout << "Revenue: " << revenue << endl 
         << "Unit Sold: " << inventory.getUnitSold() << endl
         << "Unit Available: " << inventory.getUnitAvailable() << endl;
}

Seller::Seller(float rev, string n, int t): Account(n, t){
    revenue = rev;
    inventory.setInventory(0);
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

void Seller::addUnitSold(int uS)
{
    inventory.addUnitSold(uS);
}

void Seller::subUnitSold(int uS)
{
    inventory.subUnitSold(uS);
}

void Seller::addUnitAvailable(int uA)
{
    inventory.addUnitAvailable(uA);
}

void Seller::subUnitAvailable(int uA)
{
    inventory.subUnitAvailable(uA);
}

void Seller::printItemAvailable()
{
    inventory.printItemAvailable();
}