#include "PRODUCT.h"
#include <iostream>
using namespace std;

Product::Product()
{
    price = 0;
    weight = 0;
    availableCount = 0;
}

Product::Product(float p, float w, int aC)
{
    price = p;
    weight = w;
    availableCount = aC;
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


