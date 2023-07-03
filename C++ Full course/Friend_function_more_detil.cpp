#include <iostream>
using namespace std;

class y1;

class x1
{
    int x;
    friend void add(x1, y1);
    friend void swapValue(x1 &, y1 &);

public:
    friend void display(x1, y1);
    void setdata(int value)
    {
        x = value;
    }
};

class y1
{
    int y;
    friend void add(x1, y1);
    friend void swapValue(x1 &, y1 &);
    friend void display(x1, y1);

public:
    void setdata(int value)
    {
        y = value;
    }
};



void add(x1 o1, y1 o2)
{
    cout << "The value of a and b is: " << o1.x + o2.y;
}

void swapValue(x1 &o1, y1 &o2)
{
    int temp = o1.x;
    o1.x = o2.y;
    o2.y = temp;
}

void display(x1 o1, y1 o2)
{
    cout << "\n\nthe value of x is: " << o1.x << " and y is: " << o2.y;
}

int main()
{
    x1 c1;
    c1.setdata(3);

    y1 c2;
    c2.setdata(6);

    add(c1, c2);

    swapValue(c1, c2);

    display(c1, c2);
    return 0;
}