#include<iostream>
using namespace std;

class min{
    public:
    min(){
        cout<<"This is a constructor..."<<endl;
    }
    ~min(){
        cout<<"This is a destructor..."<<endl;
    }
};

int main(){
    min obj;
    return 0;
}