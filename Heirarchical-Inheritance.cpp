#include <iostream>
#include <string>
using namespace std;
// hierarchical inheritance 1 base class with multiple derived class
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
}; // 1st derived class
class car : public vehicle
{
}; // 2nd derived class
int main()
{
    car b1;
    bike b2;
    vehicle b3;
    return 0;
}
