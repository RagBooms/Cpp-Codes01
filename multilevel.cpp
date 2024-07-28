#include<iostream>
using namespace std;
class z{
    public: 
    z(){
        cout<<"This is a constructor..."<<endl;
    }

    ~z(){
        cout<<"This is a destructor..."<<endl;
    }

};
int main(){
    z z1;
    int a=1;
    if(a==1){
        // z z2;
    }
}