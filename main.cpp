#include <iostream>
#include "SHOP.h"
using namespace std;

int main()
{
    string userName;
    cout << "Enter your name: ";
    cin >> userName;

    Shop shop(userName, "Apek", 100); // using overloading constructor to initialize object

    // will print menu at initialization
    shop.printMenu();
    
    bool running = true;
    while(running)
    {
        int choice;
        cout << "1: print menu" << endl
             << "2: buy item" << endl
             << "3: check account balance" << endl
             << "4: add balance" << endl
             << "5: check inventory" << endl
             << "6: exit" << endl << endl;
        cin >> choice;
        cout << endl;
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
            int cred;
            cout << "Enter amount of credit: ";
            cin >> cred;
            shop.addBuyerCredit(cred);
            break;
        case 5:
            shop.printBuyerInventory();
            break;
        case 6:
            running = false;
            break;
        default:
            shop.printMenu();
            break;
        }
    }

    // Print receipt after all is done
    shop.printReceipt();

    return 0;
}