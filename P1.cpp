#include<iostream>
using namespace std;
int main(){
    int n,num=1;
    int i,j;
    cout<< "Enter Number: " ;
    cin >> n ;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
    return 0;
}