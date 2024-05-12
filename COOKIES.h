#ifndef COOKIES_H
#define COOKIES_H

class Cookies{

    private:
        float price, weight;
        int count;

    public:
        Cookies();
        Cookies(float, float);
        float getPrice();
        float getWeight();
};

#endif 