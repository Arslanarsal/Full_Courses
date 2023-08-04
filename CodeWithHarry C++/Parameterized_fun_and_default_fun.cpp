#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    complex();
    void display()
    {
        cout << "The value of a and b is " << a << " + " << b << "i" << endl;
    }
};

/* constructors function automaticly invoked when we make Object of the class
 invoked along with the Objects;
 And his name as the name same as the class name
 And his no return type or return value*/

complex::complex() // it is default constructor as it accept no parameters
{
    static int c;
    c = c + 4;

    cout << c << endl;
    a = 10;
    b = 7;
}

complex::complex(int x, int y) // it is Parameterized constructor as it accept parameters
{
    static int c;
    c = c + 6;

    cout << c << endl;
    a = x;
    b = y;
}

int main()
{
    complex c1;
    // Implicit call
    complex c2(4, 5);
    // Explicit call
    complex c3 = complex(5, 8);

    c1.display();
    c2.display();
    c3.display();

    return 0;
}