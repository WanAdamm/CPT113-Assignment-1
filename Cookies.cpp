#include "COOKIES.h"
#include <iostream>
using namespace std;

int Cookies::cookieCount = 0;

Cookies::Cookies()
{
    cookieCount++;
}

Cookies::Cookies(float p, float w, int aC):Product(p,w,aC)
{
    cookieCount++;
}

Cookies::~Cookies()
{
    cookieCount--;
}

int Cookies::getCookieCount()
{
    return cookieCount;
}