#include <iostream>
#include <string>
using namespace std;
// Hybrid inheritance have all type of inheritance
class vehicle
{ // 1st base class
public:
    vehicle()
    {
        cout << "This is a vehicle.\n";
    }
};
class fourwheeler
{ // 2nd base class
public:
    fourwheeler()
    {
        cout << "This is a fourwheeler.\n";
    }
};
class bike : public vehicle
{
};
class car : public bike, public fourwheeler
{
};
int main()
{
    car d1;
    bike d2;
    fourwheeler d3;
    vehicle d4;
    return 0;
}
