#include <iostream>
#include <string>
using namespace std;

int main()
{

    string name;
    cout << "Online Examination" << endl;
    cout << "Enter Your Name : ";
    cin >> name;

    cout << endl
         << endl
         << "Total Question : 3 \nTotal Marks : 3" << endl
         << endl;

    float marks = 0, negative;
    string ans, answer;
    cout << "Question : 1 \nWho is our Prime Minister? " << endl;
    cin >> ans;
    if (ans == "Narendra-Modi")
    {
        cout << "True" << endl;
        marks = marks + 1;
    }
    else
    {
        cout << "False" << endl;
        negative = negative + 1;
    }
    cout << "Question : 2 \nWhat is full form of DBMS? ANS in capital form." << endl;
    cin >> ans;
    if (ans == "DATABASE-MANAGEMENT-SYSTEM")
    {
        cout << "True" << endl;
        marks = marks + 1;
    }
    else
    {
        cout << "False" << endl;
        negative = negative + 1;
    }
    cout << "Question : 3 \nWhat is full form of SQL? ANS in capital from." << endl;
    cin >> ans;
    if (ans == "STRUCTURE-QUERY-LANGUAGE")
    {
        cout << "True" << endl;
        marks = marks + 1;
    }
    else
    {
        cout << "False" << endl;
        negative = negative + 1;
    }
    cout << "Question : 4 \nWhat is square of 13 ?" << endl;
    cin >> answer;
    if (answer == "169")
    {
        cout << "True" << endl;
        marks = marks + 1;
    }
    else
    {
        cout << "False" << endl;
        negative = negative + 1;
    }
    cout << "Question : 5 \nHow many numbers are include in a mobile number ?" << endl;
    cin >> answer;
    if (answer == "10")
    {
        cout << "True" << endl;
        marks = marks + 1;
    }
    else
    {
        cout << "False" << endl;
        negative = negative + 1;
    }

    cout << endl
         << "Your True Answer : " << marks << endl;
    cout << "Your False Answer : " << negative << endl;

    marks = marks - (negative * 0.25);
    if (marks >= 1)
    {
        cout << endl
             << "Congratulation You Pass 🎉" << endl;
    }
    else
    {
        cout << endl
             << "Sorry You Fail 😅" << endl
             << endl;
    }

    cout << "Name : " << name << endl
         << "Marks : " << marks << endl;
}