#ifndef BUYERINVENTORY_H
#define BUYERINVENTORY_H
#include "CAKE.h"
#include "COOKIES.h"

// Inventory for buyer

class BuyerInventory
{
private:
    Cake cakes[5]; // each inventory has 5 spaces for cakes
    Cookies cookies[5]; // each inventory has 5 spaces for cookies

public:
    BuyerInventory(); // default constructor
    void printItemAvailable(); // function used to print item variable inside the inventory, this function would be used by buyer class
    void addItem(int, int); // function used to add item to inventory

    friend ostream &operator<<(ostream &out, const BuyerInventory &inventory); // friend overloading operator for "<<" to print the receipt after program is done
};

#endif