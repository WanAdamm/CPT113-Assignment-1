#ifndef SELLERINVENTORY_H
#define SELLERINVENTORY_H
#include "CAKE.h"
#include "COOKIES.h"

// Inventory for seller

class SellerInventory
{
private:
    int unitSold, unitAvailable; // keep track of how many units of item has been sold, keep track of how man unit available left
    Cake cakes[5]; // inventory is initialized with 5 cakes
    Cookies cookies[5]; // inventory is initialized with 5 cookies

public:
    SellerInventory(); // default constructor
    void removeItem(int, int); // remove item from inventory after buyer has bought it
    void printItemAvailable(); // print item available inside the inventory
    float getItemPrice(int) const; // get price of item from seller inventory
    int getItemCount(int) const; // get count of item 
};

#endif