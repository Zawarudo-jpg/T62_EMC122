#include <iostream>
#include <string>

using namespace std;

int main()
{
    int choice, pay, change, price;
    string drink;
    
    cout << "Select your order" << endl << endl;
    
    cout << "[1] Pepsi (P100)" << endl;
    cout << "[2] Dr. Pepper (P120)" << endl;
    cout << "[3] Coca-cola (95)" << endl << endl;
    
    cout << "Choice: ";
    cin >> choice;

    
    switch(choice)
    {
        case 1:
            price = 100;
            drink = "Pepsi.";
        break;

        case 2:
            price = 120;
            drink = "Dr. Pepper.";
        break;

        case 3:
            price = 95;
            drink = "Coca-cola.";
        break;

        default:
            cout << "Invalid input";
            return 0;
    } 

    cout << "Your Payment: ";
    cin >> pay;

    if(pay > price)
    {
        change = pay - price;
        cout << "You have purchased " << drink << endl;
        cout << "Change: " << change;
    }
    else if(pay == price)
    {
        change = pay - price;
        cout << "You have purchased " << drink << endl;
        cout << "Change: " << change;
    }
    else
    {
        cout << "You don't have enough funds";
    }

    return 0;
}