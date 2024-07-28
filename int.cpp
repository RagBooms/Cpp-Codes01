#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int dv(int x, int y)
{
    if (x < y)
    {
        x = x + y;
        y = x - y;
        x = x - y;
    }
    return x / y;
}

int mo(int x, int y)
{
    return x % y;
}

int main()
{
    int a, b,f;
    char c;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter A to add\nEnter S to subtract\nEnter M to multiply\nEnter D to divide\nEnter O for modulo\n"
         << endl;
    cout << " Enter Choice: ";
    cin >> c;

    if (c == 'A' || c == 'a')
        f = add(a, b);
    else if (c == 'S' || c == 's')
        f = sub(a, b);
    else if (c == 'M' || c == 'm')
        f = mul(a, b);
    else if (c == 'D' || c == 'd')
        f = dv(a, b);
    else if (c == 'O' || c == 'o')
        f = mo(a, b);

    cout << "Answer is: " << f << endl;
    return 0;
}