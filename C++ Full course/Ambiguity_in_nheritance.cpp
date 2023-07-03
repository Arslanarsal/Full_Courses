#include <iostream>
#include <cmath>
using namespace std;

class A
{
public:
    void hello()
    {
        cout << "Good morning" << endl;
    }
};
class B
{
public:
    void hello()
    {
        cout << "Good Afternoon" << endl;
    }
};

class C : public A, public B
{
public:
    void hello()
    {
        A::hello(); // Here C class call A class hello function
        B::hello(); // Here C class call B class hello function
    }
};

class E : public C
{
public:
    void hello()
    {
        A::hello(); // Here E class call A class hello function
        B::hello(); // Here E class call B class hello function
    }
};
int main()
{
    A a;
    a.hello();

    B b;
    b.hello();

    C c;
    c.hello();

    E e;
    e.hello();

    return 0;
}