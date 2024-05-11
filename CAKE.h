#ifndef CAKE_H
#define CAKE_H

class Cake{

    private:
        float price, weight;

    public:
        Cake();
        Cake(float, float);
        float getPrice();
        float getWeight();
};

#endif