#include "PRODUCT.h"
#include <iostream>
using namespace std;

Product::Product()
{
    itemName = "NO NAME";
    price = 0;
    weight = 0;
    availableCount = 0;
}

Product::Product(string n, float p, float w, int aC)
{
    itemName = n;
    price = p;
    weight = w;
    availableCount = aC;
}

void Product::getProductInfo()
{
    cout << "Item: " << itemName
         << "Price: " << price
         << "Weight: " << weight << endl;
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
