#include "PRODUCT.h"
#include <iostream>
#include <iomanip>
using namespace std;

int Product::productCount = 0;

Product::Product()
{
    // initialize private member variable of Product
    price = 0;
    weight = 0;
    availableCount = 0;
    productID = getProductCount(); // will only call this function once thus it will not be refresehd
    productCount++; // add to static variable of Product
}

Product::Product(float p, float w, int aC)
{
    // initialize private member variable of Product with value given
    price = p;
    weight = w;
    availableCount = aC;
    productID = getProductCount();
    productCount++; // add to static variable of Product
}

void Product::printProductInfo()
{
    // pritn the product info out
    cout << setw(30) << itemName
         << setw(16) << fixed << setprecision(2) << "RM " << price
         << setw(10) << weight << "g"
         << setw(10) << productID
         << setw(18) << availableCount << endl;
}

int Product::getProductID() const
{
    // return the productID
    return productID;
}

string Product::getItemName() const
{
    // return the itemName
    return itemName;
}

void Product::setItemName(string n)
{   
    // set itemName to value passed into the function
    itemName = n;
}

float Product::getPrice() const
{
    // return price
    return price;
}

void Product::setPrice(float p)
{
    // set price to value passed into the function
    price = p;
}

float Product::getWeight() const
{
    // return weight of item
    return weight;
}

void Product::setWeight(float w)
{
    // set weight of item into value passed into the functon
    weight = w;
}

int Product::getAvailableCount() const
{
    // return available count
    return availableCount;
}

void Product::setAvailableCount(int aC)
{
    // set avalableCount to value passed into the setter function
    availableCount = aC;
}

void Product::subAvailableCount(int count)
{
    // subtract availableCount by value passed into the function
    availableCount -= count;
}

void Product::addAvailableCount(int count)
{
    // add availableCount by value passed into the function
    availableCount += count;
}