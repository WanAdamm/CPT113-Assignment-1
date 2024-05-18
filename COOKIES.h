#ifndef COOKIES_H
#define COOKIES_H

#include "PRODUCT.h"

class Cookies : public Product // Cookies is derived from Product
{
private:
    static int cookieCount; // keep track of how many instances of cookies there is

public:
    Cookies(); // default constructor
    Cookies(float, float, int); // overloading constructor
    ~Cookies(); // destructor
    static int getCookieCount(); // static getter function to get cookieCount
};

#endif