#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory{
    private:
        int unitSold, unitAvailable;
    public:
        Inventory();
        Inventory(int, int);
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