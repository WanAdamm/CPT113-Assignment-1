#ifndef INVENTORY_H
#define INVENTORY_H
#include "CAKE.h"
#include "COOKIES.h"
class Inventory{
    private:
        int unitSold, unitAvailable;
        Cake cakes;
        Cookies cookies;
    public:
        Inventory();
        Inventory(int, int);
        void setInventory(int,int);
        int getUnitSold();
        int getUnitAvailable();
        void setUnitSold(int);
        void setUnitAvailable(int); // technically could've gone for setFunc without adder or subtractor but for readibility sake.
        void addUnitSold(int);
        void subUnitSold(int);
        void addUnitAvailable(int);
        void subUnitAvailable(int);
};

#endif