#include <iostream> // Including the input/output stream library

using namespace std; // Using the standard namespace

class A
{             // Defining a class named A
    string x; // Declaring a private string member variable x

public:
    A() {} // Default constructor for class A
    A(string i)
    { // Parameterized constructor for class A that initializes x
        x = i;
    }

    void operator+(A); // Declaration of an overloaded '+' operator function
    void display();    // Declaration of a display function
};

void A::operator+(A a)
{                                                                  // Definition of the overloaded '+' operator function for class A
    string m = x + a.x;                                            // Concatenating the 'x' values of two objects and storing it in 'm'
    cout << "The result of the addition of two objects is: " << m; // Printing the concatenated string
}

int main()
{
    A a1("Welcome "); // Creating an object a1 of class A and initializing it with "Welcome "
    A a2("Back");     // Creating an object a2 of class A and initializing it with "Back"
    a1 + a2;          // Using the overloaded '+' operator to concatenate the strings within objects a1 and a2
    return 0;         // Returning 0 to indicate successful completion of the program
}
