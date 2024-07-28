#include<iostream>
using namespace std;
class m{
    public:
    m(){
        cout<<"This is a constructor.."<<endl;
    }
    ~m(){
        cout<<"This is a destructor.."<<endl;
    }
}; 

int main(){
    m n1;
    int a=1;
    if(a==1){
        m n2;
    }
    return 0;
}