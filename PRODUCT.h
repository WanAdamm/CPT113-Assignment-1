#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product // Base class of Cookies and Cake
{

private:
    static int productCount; // keep track of how many instances of Product there is
    string itemName; // store name of item
    float price, weight; // store price and weight of item
    int availableCount, productID; // store available item count and its produc ID

    static int getProductCount() // static getter function to get productCount
    {
        return productCount;
    }

public:
    Product(); // default constructor
    Product(float, float, int); // overloading constructor
    void printProductInfo(); // function which prints product info
    int getProductID() const; // getter function for productID
    string getItemName() const; // getter function for itemName
    void setItemName(string); // setter function for itemName
    float getPrice() const; // getter function for Price
    void setPrice(float); // setter function for Price
    float getWeight() const; // getter function for weight
    void setWeight(float); // setter function for weight
    int getAvailableCount() const; // would be use to update inventory
    void setAvailableCount(int); // setter function for availableCount
    void subAvailableCount(int); // setter function which will subtract from current availableCount
    void addAvailableCount(int); // setter function which will add the current availableCount
};

#endif