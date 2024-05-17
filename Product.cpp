#include "PRODUCT.h"
#include <iostream>
#include <iomanip>
using namespace std;

int Product::productCount = 0;

Product::Product()
{
    price = 0;
    weight = 0;
    availableCount = 0;
    productID = getProductCount(); // will only call this function once thus it will not be refresehd
    productCount++;
}

Product::Product(float p, float w, int aC)
{
    price = p;
    weight = w;
    availableCount = aC;
    productID = getProductCount();
    productCount++;
}

void Product::printProductInfo()
{
    cout  << setw(30) << itemName
          << setw(16) << fixed << setprecision(2) << "RM " << price
          << setw(10) << weight << "g"
          << setw(10) << productID
          << setw(18) << availableCount << endl;
}

int Product::getProductID()
{
    return productID;
}

string Product::getItemName()
{
  return itemName;
}

void Product::setItemName(string n)
{
  itemName = n;
}

float Product::getPrice()
{
    return price;
}

void Product::setPrice(float p)
{
    price = p;
}

float Product::getWeight()
{
    return weight;
}

void Product::setWeight(float w)
{
    weight = w;
}

int Product::getAvailableCount()
{
    return availableCount;
}

void Product::setAvailableCount(int aC)
{
    availableCount = aC;
}

void Product::subAvailableCount(int count)
{
    availableCount -= count;
}

void Product::addAvailableCount(int count)
{
    availableCount += count;
}