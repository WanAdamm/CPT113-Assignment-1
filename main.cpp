#include <iostream>
#include "SHOP.h"

using namespace std;

// friend function to set discount;
void setBuyerDiscount(Shop &shop)
{
    if (shop.buyer.getMoneySpent() > 300.00)
    {
        shop.setDiscount(0.05); // set discount to 5% if customer already bought item more than 300;
    }
}

int main()
{
    string userName;
    cout << "Enter your name: ";
    cin >> userName;

    Shop shop(userName, "Apek", 100); // using overloading constructor to initialize object

    // will print menu at initialization
    shop.printMenu();

    bool running = true;
    while (running)
    {
        int choice;
        cout << "1: menu" << endl
             << "2: buy item" << endl
             << "3: check account balance" << endl
             << "4: add balance" << endl
             << "5: check inventory" << endl
             << "6: exit" << endl
             << endl;
        cin >> choice;
        cout << endl;

        setBuyerDiscount(shop); // will run after every round checking if the buyer have spent more than 300 and applying discount if more than 300 has been spent

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

            if (id >= 0 && id <= 9)
            {
                shop.buyItem(id, count);
            }
            else
            {
                cout << "INVALID ITEM ID" << endl;
            }

            break;
        case 3:
            shop.printBuyerCredit();
            break;
        case 4:
            float cred;
            cout << "Enter amount of credit: ";
            cin >> cred;

            if (cred < 0)
            {
                cout << "Please enter a positive number" << endl;
            }
            else
            {
                shop.addBuyerCredit(cred);
            }

            break;
        case 5:
            if (shop.buyerItemCount() > 0)
            {
                shop.printBuyerInventory();
            }
            else
            {
                cout << "You have not purchase anything yet\n"
                     << endl;
            }

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