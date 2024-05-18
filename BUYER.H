#ifndef BUYER_H
#define BUYER_H
#include "ACCOUNT.h"
#include "BUYERINVENTORY.h"

class Buyer : public Account
{

private:
    float credit; // keep track of money for customer to use
    int cakeCount = 0; // keep track of how many cake has been bought by customer
    int cookieCount = 0; // keep track of how many cookies has been bought by customer
    float moneySpent = 0; // 
    BuyerInventory inventory;

public:
    Buyer(); // default constructor
    float getCredit() const; // getter function for credit
    void addCredit(float); // function used to add credit
    void withdrawCredit(float); // function used to withdraw credit
    void buyItem(int, int, float); // function used to buy item from seller
    void printInventory(); // function used to show available item in buyer inventory
    float getMoneySpent() const; // getter functionfor moneySpent
    int getCakeCount() const; // getter function for cakeCount
    int getCookieCount() const; // getter function for cookieCount
    void printItemReceipt(); // function used to print receipt after program is done
};

#endif