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
    float getCredit() const;
    void addCredit(float);
    void withdrawCredit(float);
    void buyItem(int, int, float);
    void printInventory();
    float getMoneySpent() const;
    int getCakeCount() const;
    int getCookieCount() const;
    void printItemReceipt();
};

#endif