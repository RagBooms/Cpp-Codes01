#include<iostream>
using namespace std;

// Declaration of the class 'jeet'
class jeet {
public:
    string name;
    string surname;

    // Default constructor: sets default values for name and surname
    jeet() {
        name = "jeet";
        surname = "patel";
    }

    // Copy constructor: copies values from another jeet object
    jeet(jeet& b) {
        name = b.name;
        surname = b.surname;
    }

    // Parameterized constructor: initializes name and surname with given values
    jeet(string x, string y) {
        name = x;
        surname = y;
    }

    // Destructor: outputs a message when an object is destroyed
    ~jeet() {
        cout << "Its a text..." << endl;
    }
};

// Main function
int main() {
    // Creating objects of class 'jeet'
    jeet a; // Using the default constructor
    jeet b = a; // Using the copy constructor to create 'b' from 'a'
    jeet c("JARVIR", "EDITH"); // Using the parameterized constructor

    // Outputting values of name and surname for each object
    cout << a.name << " " << a.surname << endl;
    cout << b.name << " " << b.surname << endl;
    cout << c.name << " " << c.surname << endl;

    return 0;
}
