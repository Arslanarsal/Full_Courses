#include <iostream>
#include <cmath>
using namespace std;

class point
{
    float x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void set_value(float, float);
    friend void distance(point, point);
};

void distance(point p1, point p2)
{
    float x_diff = pow((p2.x - p1.x), 2);
    float y_diff = pow((p2.y - p1.y), 2);
    cout << "The difference between " << sqrt(x_diff + y_diff) << endl;
}

void point::set_value(float a, float b)
{
    x = a;
    y = b;
}

int main()
{
    int x1, x2, y1, y2;
    // point p1, p2;
    cout << "Enter the value of first Points x1 , y1: ";
    cin >> x1 >> y1;
    cout << "Enter the value of first Points x2 , y2: ";
    cin >> x2 >> y2;
    point p1(x1, y1), p2(x2, y2);
    
    // p1.set_value(x1, y1);
    // p2.set_value(x2, y2);

    distance(p1, p2);

    return 0;
}