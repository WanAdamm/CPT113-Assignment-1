#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product
{

private:
    static int productCount;
    string itemName;
    float price, weight;
    int availableCount, productID;

    static int getProductCount()
    {
        return productCount;
    }

public:
    Product();
    Product(float, float, int);
    void printProductInfo();
    int getProductID();
    string getItemName();
    void setItemName(string);
    float getPrice();
    void setPrice(float);
    float getWeight();
    void setWeight(float);
    int getAvailableCount(); // would be use to update inventory
    void setAvailableCount(int);
    void subAvailableCount(int);
    void addAvailableCount(int);
};

#endif