#include <iostream>
using namespace std;
class base
{
public:
    int var1;
    void display()
    {
        cout << "The value of base class var1 is: " << var1 << endl;
    }
};

class derived : public base
{
public:
    int var2;
    void display()
    {
        cout << "The value of base class var1 is: " << var1 << endl;
        cout << "The value of Derived class var2 is: " << var2 << endl;
    }
};

int main()
{
    base *base_class_pointer;
    base base_class_object;
    base_class_pointer = &base_class_object;
    base_class_pointer->var1 = 876;
    base_class_pointer->display();

    derived *derived_class_pointer;
    derived derived_class_object;
    derived_class_pointer = &derived_class_object;
    derived_class_pointer->var1 = 123;
    derived_class_pointer->var2 = 453;
    derived_class_pointer->display();

    /*
    we can point the object of derivd class using pointer of base class
    But the pointer points only his class member and methods not the
    derived class member or methods
    */

    base_class_pointer = &derived_class_object;
    base_class_pointer->var1 = 987;
    base_class_pointer->display();

    return 0;
}