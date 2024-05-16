#ifndef SELLERINVENTORY_H
#define SELLERINVENTORY_H
#include "INVENTORY.h"
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
    void setInventory(int);
    int getUnitSold();
    int getUnitAvailable();
    void setUnitSold(int);
    void setUnitAvailable(int); // technically could've gone for setFunc without adder or subtractor but for readibility sake.
    void addUnitSold(int);
    void subUnitSold(int);
    void addUnitAvailable(int);
    void subUnitAvailable(int);
    void printItemAvailable();
};

#endif