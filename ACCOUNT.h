#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account
{
private:
    string name;
    int type; // 0 default 1 buyer 2 seller, 0 cant have access to anything
public:
    Account();
    Account(string, int);
    void printAccountInfo();
    string getName() const;
    void setName(string);
    int getType() const;
    void setType(int);
};

#endif