#include <iostream>
#include <string>
using namespace std;
// Single Inheritance is a type of inheritance where we can inherit the value from one class
class vehicle
{ // base class
public:
    vehicle()
    {
        cout << "This is a vehicle.\n";
    }
};
class car : public vehicle
{
}; // derived class
int main()
{
    car v1;     // v1 is the object of car
    vehicle v2; // v2 is the object of vehicle
    return 0;
}