#include<iostream>
using namespace std;
class shape{
    protected:
    int width;
    int height;

    public:
    shape(int w,int h): width(w), height(h){}
    void setdimensions(int w, int h){
        width = w;
        height = h;
    }

    virtual int calculaterea(){
        cout<<"Area Of Shape"<<endl;
        return 0;
    }
};

class Rectangle: public shape{
    public:
    Rectangle(int w, int h): shape(w,h){}
    int calculaterea() override{
    cout<<"Area of Rectangle: ";
    return width*height;
    }
};

class Triangle: public shape{
    public:
    Triangle(int w, int h): shape(w,h){}
    int calculaterea() override{
        cout<<"Area Of Triangle: ";
        return (width*height)/2;
    }
};

int main(){
    Rectangle rect(4,5);
    Triangle tri(4,5);

    cout<< rect.calculaterea()<<endl;
    cout<< tri.calculaterea()<<endl;

    return 0;
}