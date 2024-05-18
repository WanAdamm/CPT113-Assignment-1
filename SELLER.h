#ifndef SELLER_H
#define SELLER_H

#include "ACCOUNT.h"
#include "SELLERINVENTORY.h"

class Seller : public Account
{

private:
    float revenue;
    SellerInventory inventory;

public:
    Seller();
    Seller(float, string, int);
    void printSellerInfo();
    float getRevenue();
    void addRevenue(float);
    void subRevenue(float);
    void printItemAvailable();
    void sellItem(int, int);
    float getItemPrice(int);
    int getItemCount(int);
};

#endif