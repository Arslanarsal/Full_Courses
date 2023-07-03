#include <iostream>
using namespace std;

class complex; // forward declaration

//   --> first class
class calculator
{
public:
    int a;

    void sumRealComplex(complex, complex);
    void displaydata();
};

// --> second class
class complex
{
    int a, b;
    // indivisual freiend function in a class
    friend void calculator ::sumRealComplex(complex, complex);

    // Whole class friend he cam access our all private data
    friend class calculator;

public:
    void getdata(int, int);
    void displaydata();
};

void complex ::getdata(int x, int y)
{
    a = x;
    b = y;
}

void complex ::displaydata()
{
    cout << "The value of a is " << a << " the value of b is " << b << "i" << endl;
}

void calculator::sumRealComplex(complex o1, complex o2)
{
    a = (o1.a + o2.a);
}

void calculator ::displaydata()
{
    cout << "The value of a is " << a << "i" << endl;
}

int main()
{
    complex c1, c2;
    c1.getdata(3, 5);
    c1.displaydata();

    c2.getdata(4, 2);
    c2.displaydata();

    calculator c3;
    c3.sumRealComplex(c1, c2);
    c3.displaydata();
    return 0;
}