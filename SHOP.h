#ifndef SHOP_H
#define SHOP_H
#include "BUYER.H"
#include "SELLER.h"
#include "INVENTORY.h"
#include "CAKE.h"
#include "COOKIES.h"

class Shop{
    private:
        Inventory inventory;
        Cake cake[3];
        Cookies cookies[3];
        Buyer buyer{100, "Wan", 1};
        Seller seller{0, 100, "Tou", 2};
    public:
        Shop();
        ~Shop();
        void showMenu();
        void buyItem();
        void sellItem();
};

#endif