/*banking system
1.bank balance
2.money withdraw/add*/
#include <iostream>
#include <iomanip> //manipulate karna values change karne ke liye
class BankAccount
{
private:
    double balance; // ketlu balance che
public:
    BankAccount(double initialBalance = 0.0) : balance(initialBalance) {} // intial balance 0 che
    // Function to deposit/add money into account
    void deposit(double amount)
    {
        balance += amount;
        std::cout << "Deposited ₹" << amount << "into your account." << std::endl;
    }
    // Function to withdraw money from the account
    bool withdraw(double amount)
    {
        if (balance >= amount)
        { // jetli amount joie e balance karta vadhare hase to j nikadse
            balance -= amount;
            std::cout << "Withdrawn ₹" << amount << "from your account." << std::endl;
            return true;
        }
        else
        {
            std::cout << "Insufficient funds to withdraw ₹" << amount << "from your account." << std::endl;
            return false;
        }
    }
    // Function to diplay balance
    void displayBalance() const
    {
        std::cout << "Current Balance: ₹" << balance << std::endl;
    }
};
int main()
{
    BankAccount account; // acount is the obj
    int choice;          // for selecting opt
    double amount;       // ketli amount che
    std::cout << "Welcome to the Simple Banking System!" << std::endl;
    do
    {
        std::cout << "\nMenu:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter your choice: ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            std::cout << "Enter amount to deposit: ₹";
            std::cin >> amount;
            account.deposit(amount);
            break;
        case 2:
            std::cout << "Enter amount to withdraw: ₹";
            std::cin >> amount;
            account.withdraw(amount);
            break;
        case 3:
            account.displayBalance();
            break;
        case 4:
            std::cout << "Thank you for using the Simple Banking System!" << std::endl;
            break;
        default:
            std::cout << "Invalid choice.Please try again." << std::endl;
            break;
        }
    } while (choice != 4);
    return 0;
}
