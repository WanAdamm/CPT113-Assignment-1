#ifndef SELLER_H
#define SELLER_H
#include "ACCOUNT.h"
#include "INVENTORY.h"

class Seller: public Account {

    private:
        float revenue;
        Inventory inventory;
    public:

};

#endif