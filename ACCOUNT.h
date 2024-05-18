#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account
{
private:
    string name; // store name for account
    int type; // 0 default 1 buyer 2 seller, 0 cant have access to anything
public:
    Account(); //default constructor
    Account(string, int); // overloaded constructor
    void printAccountInfo(); // will print account info such as name and type
    string getName() const; // getter function for name
    void setName(string); // setter function for name
    int getType() const; // getter function for type
    void setType(int); // setter function for type
};

#endif