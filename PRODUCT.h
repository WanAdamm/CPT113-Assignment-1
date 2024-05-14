#ifndef PRODUCT_H
#define PRODUCT_H

class Product{

    private:
        float price, weight;
        int availableCount;
    public:
        Product();
        Product(float, float, int);
        void getProductInfo();
        float getPrice();
        void setPrice(float);
        float getWeight();
        void setWeight(float);
        int getAvailableCount(); // would be use to update inventory
        void setAvailableCount(int);

};

#endif 