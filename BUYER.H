#ifndef BUYER_H
#define BUYER_H
#include "ACCOUNT.h"
#include "BUYERINVENTORY.h"

class Buyer : public Account
{

private:
    float credit;
    int cakeCount = 0;
    int cookieCount = 0;
    float moneySpent = 0;
    BuyerInventory inventory;

public:
    Buyer();
    float getCredit();
    void addCredit(float);
    void withdrawCredit(float);
    void buyItem(int, int, float);
    void printInventory();
    float getMoneySpent();
    int getCakeCount();
    int getCookieCount();
    void printItemReceipt();
};

#endif