#include <iostream>
using namespace std;

class base
{
protected:
    int base1;

public:
    base(int a)
    {
        base1 = a;
    }
    // virtual void display(){}
    virtual void display()=0;//pure function -->if we do not write function in derived class they give error
};

class derived1 : public base
{
protected:
    int derived;

public:
    derived1(int a, int b) : base(a)
    {
        derived = b;
    }
    void display()
    {
        cout << "The value of base class is " << base1 << endl;
        cout << "The value of derived1 class is " << derived << endl;
    }
};

class derived2 : public base
{
protected:
    int derive;

public:
    derived2(int a, int b) : base(a)
    {
        derive = b;
    }
    void display()
    {
        cout << "The value of base class is " << base1 << endl;
        cout << "The value of derived2 class is " << derive << endl;
    }
};
/*
if we can't use virtual function in base class 
every time ptr call ptr class display method
if we use virtual function in base class ptr call the object class display method
*/
int main()
{
    base *ptr[2];

    derived1 obj1(3, 6);
    derived2 obj2(4, 8);
    // obj1.display();
    // obj2.display();

    ptr[0] = &obj1;
    ptr[1] = &obj2;
    ptr[0]->display();
    ptr[1]->display();

    return 0;
}