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
        void setCredit(float);
};

#endif