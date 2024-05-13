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
        Cake cake;
        Cookies cookies;
        Buyer buyer;
        Seller seller;
    public:
        Shop();
        ~Shop();
        void showMenu();
        void buyItem();
        void sellItem();
};

#endif