// Program for the banking system
#include <iostream>
#include <iomanip> //will manupilate the values of the given amount
using namespace std;

class BankAccount
{
private:
    double balance;

public: 
    BankAccount(double initialbalance = 0.0) : balance(initialbalance) {}

    // Function to deposit the amount
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited $" << amount << " into your account" << endl;
    }

    // Function to withdtaw money from your bank account
    bool withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdraw $" << amount << " from your account" << endl;
            return true;
        }
        else
        {
            cout << "Insufficient Balance to withdraw $" << amount << " from your account" << endl;
        }
    }

    // Function to display the balance
    void displayBalance() const
    {
        cout << "Current balance: $" << balance << endl;
    }
};

int main()
{
    BankAccount account;

    int choice;
    double amount;

    cout << "Welcome to the Banking System..." << endl;

    do
    {
        cout << "\nMenu:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4.Exit\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the amount to deposit: ";
            cin >> amount;
            account.deposit(amount); // calling the deposit function
            break;

        case 2:
            cout << "Enter the amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount); // calling the withdraw function
            break;

        case 3:
            account.displayBalance(); // calling the display balance function
            break;

        case 4:
            cout << "Thanks for visiting our banking system...";
            break;

        default:
            cout << "You entered the invalid choice.....!!";
            break;
        }
    } while (choice != 4);
    return 0;
}