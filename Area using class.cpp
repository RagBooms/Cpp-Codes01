#include <iostream>
using namespace std;

class shape
{
protected:
    int width, height;

public:
    shape(int w, int h) : width(w), height(h) {}
    void setdimension(int w, int h) //Declaring a function to determine the area of the shape...
    {
        height = h; //setting height
        width = w; //setting width
    }
    virtual int area()
    {
        cout << "Area Of Shape: " << endl;
        return 0;
    }
};

class rectangle : public shape
{
public:
    rectangle(int w, int h) : shape(w, h) {}
    int area() override
    {
        cout << "Area Of Rectangle: ";
        return width * height;
    }
};

int main()
{
    int a,b;
    cout<< "Enter Width: ";
    cin >> a;
    cout<< "Enter Height: ";
    cin >> b;
    rectangle re(a, b);
    cout << re.area() << endl;
    return 0;
}