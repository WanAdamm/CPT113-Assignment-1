#ifndef SHOP_H
#define SHOP_H
#include "BUYER.h"
#include "SELLER.h"

class Shop{
    private:
        float discount = 0.0;
        Seller seller;
        Buyer buyer;

    public:
        Shop();
        Shop(string, string, float);
        void printReceipt();
        void printMenu();
        void printSellerInfo();
        void buyItem(int, int);
        void printBuyerCredit();
        void addBuyerCredit(float);
        void printBuyerInventory();
        int buyerItemCount();
        void setDiscount(float);
        float getDiscount();

        friend void priceAfterDiscount(Shop& shop);
};

#endif