#include <iostream>
#include "SHOP.h"

using namespace std;

int main()
{
    string userName; // store username of custoemr
    cout << "Enter your name: ";
    cin >> userName; // get username of customer

    Shop shop(userName, "Apek", 100); // using overloading constructor to initialize object

    // will print menu at initialization
    shop.printMenu();

    bool running = true;
    while (running) // while runnng is true it will keep asking the user about what option to do
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

        switch (choice)
        {
        case 1:
            shop.printMenu(); // print list of item that is being sold by the shop
            break;
        case 2:
            int id, count;
            cout << "Enter ID of item: ";
            cin >> id;
            cout << "Enter how many of it you want: ";
            cin >> count;

            if (id >= 0 && id <= 9) // check if the id of item is valid
            {
                shop.buyItem(id, count); // if valid then proceed with buying
            }
            else
            {
                cout << "INVALID ITEM ID" << endl; // else warn the customer
            }

            break;
        case 3:
            shop.printBuyerCredit(); // print the amount of money a customer has
            break;
        case 4:
            float cred;
            cout << "Enter amount of credit: ";
            cin >> cred;

            if (cred < 0) // input validation for cred
            {
                cout << "Please enter a positive number" << endl << endl;
            }
            else
            {
                shop.addBuyerCredit(cred);
            }

            break;
        case 5:
            if (shop.buyerItemCount() > 0) // check if theres anything inside customer inventory
            {
                shop.printBuyerInventory(); // print customer inventory
            }
            else
            {
                cout << "You have not purchase anything yet\n"
                     << endl;
            }

            break;

        case 6:
            // set the running condition to false thus terminating the while loop
            running = false;
            break;
        default:
            // if user has enter any option other than 1-6 it would be defaulted to printMenu
            shop.printMenu();
            break;
        }
    }

    // Print receipt after all is done
    shop.printReceipt();

    return 0;
}