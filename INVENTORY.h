#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory{
    private:
        int unitSold, unitAvailable;
    public:
        Inventory();
        Inventory(int, int);
        int getUnitSold();
        int setUnitSold();
        int getUnitAvailable();
        int setUnitAvailable();
};

#endif