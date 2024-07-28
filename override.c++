#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eating"<<endl;
    }
};

class Goat: public Animal{
    public:
    void eat(){
        cout<<"Eating Grass";
    }
};

int main(){
    Goat obj;
    Animal obj1;
    obj1.eat();
    obj.eat();

    return 0;
}