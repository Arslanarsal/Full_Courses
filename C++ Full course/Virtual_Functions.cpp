#include <iostream>
using namespace std;
class base
{
public:
    int var1;
    virtual void display()
    {
        cout << "The value of base class var1 is: " << var1 << endl;
    }
    void display1()
    {
        cout << "The value of base class var1 display1 is: " << var1 << endl;
    }
};

class derived : public base
{
public:
    int var2 = 999;
    void display()
    {
        cout << "The value of base class var1 is: " << var1 << endl;
        cout << "The value of Derived class var2 is: " << var2 << endl;
    }
    void display1()
    {
        cout << "The value of base class var1 display2 is: " << var1 << endl;
    }
};

int main()
{
    base *base_class_pointer;
    base base_class_object;
    // base_class_pointer = &base_class_object;
    // base_class_pointer->var1 = 876;
    // base_class_pointer->display();

    derived *derived_class_pointer;
    derived derived_class_object;
    // derived_class_pointer = &derived_class_object;
    // derived_class_pointer->var1 = 123;
    // derived_class_pointer->var2 = 453;
    // derived_class_pointer->display();

    /*
    we can point the object of derivd class using pointer of base class
    But the pointer points only his class member and methods not the
    derived class member or methods

    But when we make a virtual method in base class the pointer 
    does not use his class virtual method. The poineter use derived class method
    */

    base_class_pointer = &derived_class_object;
    base_class_pointer->var1 = 987;
    base_class_pointer->display();
    base_class_pointer->display1();

    return 0;
}