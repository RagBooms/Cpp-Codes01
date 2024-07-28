#include <iostream>
#include <string>
#include <map>
using namespace std;
class login
{
private:
    map<string, string> user;

public:
    bool registration(string username, string password)
    {
        if (user.find(username) == user.end())
        {
            user[username] = password;
            return true;
        }
        return false;
    }
    bool authentication(string username, string password)
    {
        if (user.find(username) != user.end() && user[username] == password)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    login id;
    id.registration("vaidehi", "vaidehi@1005");
    string username, password;
    cout << "Enter username:" << endl;
    cin >> username;
    cout << "Enter password:" << endl;
    cin >> password;
    if (id.authentication(username, password))
    {
        cout << "Login Succesful" << endl;
    }
    else
    {
        cout << "Error" << endl;
        return 0;
    }
}