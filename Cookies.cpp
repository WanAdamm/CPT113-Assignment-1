#include "COOKIES.h"
#include <iostream>
using namespace std;

int Cookies::cookieCount = 0;

Cookies::Cookies()
{
    cookieCount++; // subtract to cakeCount which is a static variable of Cookies
}

Cookies::Cookies(float p, float w, int aC) : Product(p, w, aC)
{
    cookieCount++; // subtract to cakeCount which is a static variable of Cookies
}

Cookies::~Cookies()
{
    cookieCount--; // subtract to cakeCount which is a static variable of Cookies
}

int Cookies::getCookieCount()
{
    return cookieCount; // getter function of the static variable
}