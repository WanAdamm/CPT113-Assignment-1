#ifndef COOKIES_H
#define COOKIES_H

#include "PRODUCT.h"

class Cookies : public Product{
    private:
        static int cookieCount;
    public:
        Cookies();
        Cookies(string,float,float,int);
        ~Cookies();
        int getCookieCount();
};

#endif