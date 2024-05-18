#ifndef CAKE_H
#define CAKE_H

#include "PRODUCT.h"

class Cake : public Product
{
private:
    static int cakeCount;

public:
    Cake();
    Cake(float, float, int);
    ~Cake();
    static int getCakeCount();
};

#endif