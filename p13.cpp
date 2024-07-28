#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=1,r;
    cout<<"Enter Rows: ";
    cin>> r;

    for(i=1;i<=r;i++){
        for(j=1;j<=i;j++){
            cout<<n++;
        }
        cout<<"\n";
    }
    return 0;
}