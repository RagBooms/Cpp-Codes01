#include <iostream>
using namespace std;
class shape
{
protected:
    int width;
    int height;

public:
    shape(int w, int h) : width(w), height(h) {}
    void setdimension(int w, int h)
    {
        width = w;
        height = h;
    }
    virtual int area()
    {
        cout << "Area Of Shape:" << endl;
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
    rectangle re(11, 5);
    cout << re.area() << endl;
    return 0;
}