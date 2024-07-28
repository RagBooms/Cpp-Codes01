#include <iostream>
using namespace std;
int main()
{
    srand(time(nullptr));
    int guess = rand() % 100;
    int guessed, n = 0;
    cout << "Enter the number b/w 1 to 100" << endl;
    do
    {
        cout << "Enter any no: " << endl;
        cin >> guessed;
        if (guessed < guess)
        {
            cout << "too low" << endl;
        }
        else if (guessed > guess)
        {
            cout << "too high" << endl;
        }
        else
        {
            cout << "Congrats!You win.";
        }
        n++;
    } while (guessed != guess);
    cout << "\nNo of tries:" << n << endl;
    return 0;
}