#ifndef SHOP_H
#define SHOP_H
#include "BUYER.H"
#include "SELLER.h"

class Shop{
    private:
        Seller seller;
        Buyer buyer;
    public:
        Shop();
        Shop(string, string, float);
        void printMenu();
        void printSellerInfo();
        void buyItem(int, int);
        void printBuyerCredit();
        void addBuyerCredit(float);
        void printBuyerInventory();
};

#endif