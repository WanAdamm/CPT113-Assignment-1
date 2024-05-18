#ifndef SELLERINVENTORY_H
#define SELLERINVENTORY_H
#include "CAKE.h"
#include "COOKIES.h"

// Inventory for seller

class SellerInventory
{
private:
    int unitSold, unitAvailable;
    Cake cakes[5];
    Cookies cookies[5];

public:
    SellerInventory();
    void removeItem(int, int);
    void printItemAvailable();
    float getItemPrice(int) const;
    int getItemCount(int) const;
};

#endif