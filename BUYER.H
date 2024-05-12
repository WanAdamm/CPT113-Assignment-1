#ifndef BUYER_H
#define BUYER_H
#include "ACCOUNT.h"

class Buyer : public Account {

    private:
        float credit;
    public:
        Buyer();
        Buyer(float);
        float getCredit();
        void addCredit(float);
        void withdrawCredit(float);
};

#endif