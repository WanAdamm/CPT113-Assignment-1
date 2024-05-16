#ifndef SHOP_H
#define SHOP_H
#include "BUYER.H"
#include "SELLER.h"

class Shop{
    private:
        Buyer buyer;
        Seller seller;
    public:
        Shop();
        Shop(string, string, float);
        void printMenu();
        void buyItem();
        void sellItem();
};

#endif