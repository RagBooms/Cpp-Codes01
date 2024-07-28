#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size of an array :"<<endl;
    cin>>n;

    int *ptr = new int[n];
     
      cout<<"enter the numbers:"<<endl;

      for(int i=1;i<=n;i++){
        cin>>ptr[i];
      }
      cout<<"elements: "<<endl;

      for(int i=1;i<=n;i++){
        cout<<ptr[i];
        
      }
       delete[] ptr;
    return 0;
}