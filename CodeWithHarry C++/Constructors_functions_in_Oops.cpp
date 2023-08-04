#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex();
    void display()
    {
        cout << "The value of a and b is " << a << " + " << b << "i" << endl;
    }
};
// constructors function automaticly invoked when we creat Object of the class
// invoked along with the Objects;
// And his name as the name same as the class name
// And his no return type or return value
complex::complex()//it is default constructor as it take no parameters
{
    static int c;
    c = c + 4;

    cout << c << endl;
    a = 10;
    b = 7;
}

int main()
{
    complex c1, c2, c3;
    c1.display();
    c2.display();
    c3.display();

    return 0;
}






