// Function overloading.
#include <iostream>
using namespace std;
class btech
{
public:
    void fun(int x)
    {
        cout << "The value is " << x << endl;
    }
    void fun()
    {
        cout << "This is function 2." << endl;
    }
    void fun(char a)
    {
        cout << "The character is " << a << endl;
    }
    void fun(int x, int y)
    {
        cout << "The value is  " << x << " and  " << y << endl;
    }
};
int main()
{
    btech CS;
    CS.fun(10);
    CS.fun();
    CS.fun('v');
    CS.fun(10, 22);
    return 0;
}