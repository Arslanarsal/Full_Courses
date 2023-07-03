#include <iostream>
using namespace std;

class employee
{
    int a;
    int b;
    // not in the scop of the class
    friend employee sumcomplex(employee, employee);

public:
    
    void setdata(int, int);
    void getdata();
};

employee sumcomplex(employee o1, employee o2)
{
    employee c1;
    c1.setdata((o1.a + o2.a), (o1.b + o2.b));
    return c1;
}

void employee ::setdata(int v1, int v2)
{
    a = v1;
    b = v2;
}

void employee ::getdata()
{
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
}

int main()
{

    employee b1, b2, b3;

    b1.setdata(4, 5);
    b1.getdata();

    b2.setdata(6, 3);
    b2.getdata();

    // we cannot called them  b3.sumplex(b1,b2)
    b3 = sumcomplex(b1, b2);
    b3.getdata();

    return 0;
}