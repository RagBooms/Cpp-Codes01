#include<iostream>
using namespace std;

class gta{
    public:
    void func(){
        cout<<"Its a simple text...."<<endl;
    }
    void func(int a){
        cout<<"It will print a int : "<< a <<endl;
    }
    void func(char b){
        cout<<"It will print a char : "<< b <<endl;
    }
    void func(string c){
        cout<<"It will print a string : "<< c <<endl;
    }
};

int main(){
    gta obj;
    obj.func();
    obj.func(1);
    obj.func('A');
    obj.func("Jeet");
}