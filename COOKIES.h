#ifndef COOKIES_H
#define COOKIES_H

#include "PRODUCT.h"

class Cookies : public Product{
    private:
        static int cookieCount;
    public:
        Cookies();
        ~Cookies();
        int getCookieCount();
};

#endif 