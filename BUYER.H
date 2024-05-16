#ifndef BUYER_H
#define BUYER_H
#include "ACCOUNT.h"

class Buyer : public Account {

    private:
        float credit;
        int cakeCount = 0;
        int cookieCount = 0;
    public:
        Buyer();
        float getCredit();
        void addCredit(float);
        void withdrawCredit(float);
};

#endif