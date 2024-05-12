#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account{
    private:
        string name;
        int type;
    public:
        Account();
        Account(string, int);
        string getName();
        void setName();
        int getType();
        void setType();
};

#endif