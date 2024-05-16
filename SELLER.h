#ifndef SELLER_H
#define SELLER_H

#include "ACCOUNT.h"
#include "INVENTORY.h"

class Seller: public Account {

    private:
        float revenue;
        Inventory inventory;
    public:
        Seller();
        Seller(float);
        Seller(float, string, int);
        void printSellerInfo(); 
        float getRevenue();
        void addRevenue(float);
        void subRevenue(float);
        void addUnitSold(int);
        void subUnitSold(int);
        void addUnitAvailable(int);
        void subUnitAvailable(int);
        void printItemAvailable();
};

#endif