#include <iostream>
#include <string>
using namespace std;
struct Store
{
    string title[100] = {"AtomicHabits", "Ikigai", "1984"};
    string author[100] = {"James Clear", "Hector", "George Orewell"};
    int year[100] = {1945, 1967, 1987};
    string company[100] = {"Penguin", "ABC", "ERT"};
};
int main()
{
    Store a;
    string b;
    int i;
    cout << "Enter the Book Title: ";
    cin >> b;
    while (i < 3)
    {
        if (b == a.title[i])
        {
            break;
        }
        else
        {
            i++;
        }
    }
    cout << a.title[i] << endl
         << a.author[i] << endl
         << a.year[i] << endl
         << a.company[i];
}