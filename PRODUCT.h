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
    int getProductID() const;
    string getItemName() const;
    void setItemName(string);
    float getPrice() const;
    void setPrice(float);
    float getWeight() const;
    void setWeight(float);
    int getAvailableCount() const; // would be use to update inventory
    void setAvailableCount(int);
    void subAvailableCount(int);
    void addAvailableCount(int);
};

#endif