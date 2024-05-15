#ifndef BUYER_H
#define BUYER_H
#include "ACCOUNT.h"

class Buyer : public Account {

    private:
        float credit;
        int cakeCount;
        int cookieCount;
    public:
        Buyer();
        Buyer(float);
        Buyer(float, string, int);
        float getCredit();
        void addCredit(float);
        void withdrawCredit(float);
};

#endif