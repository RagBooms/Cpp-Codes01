#include <iostream>
#include <string>
using namespace std;
// mutilevel inheritance it have one is the base class of 1st derived class and aother one is the derived class of the 1 st class
class vehicle
{ // base class
public:
    vehicle()
    {
        cout << "This is a vehicle.\n";
    }
};
class bike : public vehicle
{
}; // derived class of vehicle
class car : public bike
{
}; // derived class of bike
int main()
{
    car c1;
    bike c2;
    vehicle c3;
}