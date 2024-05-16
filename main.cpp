#include <iostream>
#include "SHOP.h"
#include "CAKE.h"
#include "COOKIES.h"
using namespace std;

int main()
{
    string userName;
    cout << "Enter your name: ";
    cin >> userName;

    Shop shop(userName, "Apek", 100);
    
    bool running = true;
    while(running)
    {
        int choice;
        cout << "1: print menu" << endl
             << "2: buy item" << endl
             << "3: check account balance" << endl
             << "4: exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            shop.printMenu();
            break;
        case 2:
            int id, count;
            cout << "Enter ID of item: ";
            cin >> id;
            cout << "Enter how many of it you want: ";
            cin >> count;
            shop.buyItem(id, count);
            break;
        case 3:
            shop.printBuyerCredit();
            break;
        case 4:
            running = false;
            break;
        default:
            shop.printMenu();
            break;
        }
    }

    return 0;
}