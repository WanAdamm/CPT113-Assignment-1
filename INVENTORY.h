#ifndef INVENTORY_H
#define INVENTORY_H
#include "CAKE.h"
#include "COOKIES.h"
class Inventory{
    protected:
        int unitSold, unitAvailable;
        Cake cakes[5];
        Cookies cookies[5];
    public:
        Inventory();
        void setInventory(int);
        int getUnitSold();
        int getUnitAvailable();
        void setUnitSold(int);
        void setUnitAvailable(int); // technically could've gone for setFunc without adder or subtractor but for readibility sake.
        void addUnitSold(int);
        void subUnitSold(int);
        void addUnitAvailable(int);
        void subUnitAvailable(int);
        void printProductAvailable();
};

#endif