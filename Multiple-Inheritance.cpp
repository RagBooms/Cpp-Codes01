#include <iostream>
#include <string>
using namespace std;
// multiple inheritance-Multiple base class with one derived class.
class vehicle
{ // 1st base class
public:
    vehicle()
    {
        cout << "This is a vehicle.";
    }
};
class fourwheeler
{ // 2nd base class
public:
    fourwheeler()
    {
        cout << "This is a fourwheeler.";
    }
};
class car : public vehicle, public fourwheeler
{
}; // derived class
int main()
{
    car v1;
    vehicle v2;
    fourwheeler v3;
    return 0;
}