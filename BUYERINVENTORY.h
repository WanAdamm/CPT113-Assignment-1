#ifndef BUYERINVENTORY_H
#define BUYERINVENTORY_H
#include "CAKE.h"
#include "COOKIES.h"

//Inventory for buyer

class BuyerInventory
{
    private:
        Cake cakes[5];
        Cookies cookies[5];
    public:
        BuyerInventory();
        void printItemAvailable();
        void addItem(int, int);

};

#endif