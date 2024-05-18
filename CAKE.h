#ifndef CAKE_H
#define CAKE_H

#include "PRODUCT.h"

class Cake : public Product // Cake is derived from Product
{
private:
    static int cakeCount; // keep track of how many cake instances there is in the program

public:
    Cake(); // default constructor
    Cake(float, float, int); // overloading constructor
    ~Cake(); // destructor
    static int getCakeCount(); // static getter function for static cakeCount 
};

#endif