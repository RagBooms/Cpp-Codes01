#include <iostream>
#include <iomanip>
// using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double initialBalance = 0.0) : balance(initialBalance) {}

    // Function to deposit money into the account
    void deposit(double amount)
    {
        balance += amount;
        std::cout << "Deposited ₹" << amount << "into your account..." << std::endl;
    }

    // Function to withdraw money from the account
    bool withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            std::cout << "Withdraw $" << amount << "from your account." << std::endl;
            return true;
        }
        else
        {
            std::cout << "Insufficient funds to withdraw $" << amount << "from your account." << std::endl;
            return false;
        }
    }
    // Function to display balance
    void displayBalance() const //const helps to just keep the data being updated and more efficient
    {
        std::cout << "Current Balance: $" << balance << std::endl;
    }
};

int main()
{
    BankAccount account;

    int choice;
    double amount;

    std::cout << "Welcome to the simple Banking System!" << std::endl;

    do
    {
        std::cout << "\nMenu:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter Your Choice: " << std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Enter amount to deposit: $";
            std::cin >> amount;
            account.deposit(amount);
            break;
        case 2: 
            std::cout << "Enter amount to withdraw: $";
            std::cin >> amount;
            account.withdraw(amount);
            break;
        case 3:
            account.displayBalance();
        case 4:
            std::cout << "Thanks for visiting us...!!";
            break;
        default:
            std::cout << "Invalid choice. Please try again.";
        }
    } while (choice != 4);
    return 0;
}