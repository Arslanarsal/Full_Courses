#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1()
    {
        cout << "This is a time when base class 1 called " << endl;
    }
    base1(int x)
    {
        data1 = x;
        cout << "This is a time when base class 1 called " << endl;
    }
    void print_data1()
    {
        cout << "The data 1 is: " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2()
    {
        cout << "This is a time when base class 2 called " << endl;
    }
    base2(int x)
    {
        data2 = x;
        cout << "This is a time when base class 2 called " << endl;
    }
    void print_data2()
    {
        cout << "The data 2 is: " << data2 << endl;
    }
};

class derived : public base2, public base1
{
    int derived1, derived2;

public:
    derived()
    {
        cout << "This is a time when derived class called " << endl;
    }
    derived(int x, int y, int z, int a) : base1(x), base2(y)
    {
        derived1 = z;
        derived2 = a;
        cout << "This is a time when derived class called " << endl;
    }
    void print_derived()
    {
        cout << "The data of derived class is: " << derived1 << endl;
        cout << "The data of derived class is: " << derived2 << endl;
    }
};

int main()
{
    derived c1;
    c1.print_data1();
    c1.print_data2();
    c1.print_derived();

    return 0;
}