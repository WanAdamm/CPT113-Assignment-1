#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account{
    private:
        string name;
        int type; // 0 default 1 buyer 2 seller, 0 cant have access to anything
    public:
        Account();
        Account(string, int);
        string getName();
        void setName(string);
        int getType();
        void setType(int);
};

#endif