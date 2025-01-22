#include <bits/stdc++.h>
using namespace std;

class Atm
{
private:
    string pin;
    int balance;

public:
    // Constructor to initialize pin and balance
    Atm(string pin = "", int balance = 0) : pin(pin), balance(balance) {}

    // Function to display the menu
    void menu()
    {
        cout << "\nATM Menu:\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Change PIN\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
    }

    // Function to create an account (set PIN)
    void create_account()
    {
        cout << "Enter your new PIN: ";
        cin >> pin;
        cout << "Account created successfully!\n";
    }
};

int main()
{
    // Create an instance of the Atm class
    Atm obj;

    int choice;
    while (true)
    {
        obj.menu(); // Display the menu
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.create_account();
            break;
        case 5:
            cout << "Exiting the program. Thank you!\n";
            return 0;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
