#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product{

    private:
        string itemName;
        float price, weight;
        int availableCount;
    public:
        Product();
        Product(float, float, int);
        void printProductInfo();
        string getItemName();
        void setItemName(string);
        float getPrice();
        void setPrice(float);
        float getWeight();
        void setWeight(float);
        int getAvailableCount(); // would be use to update inventory
        void setAvailableCount(int);
};

#endif 