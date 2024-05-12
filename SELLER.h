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
        Seller(float, int); // int to initialize units available
        float getRevenue();
        void setRevenue(float);
        
};

#endif