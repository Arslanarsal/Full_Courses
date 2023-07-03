#include <iostream>
using namespace std;
//   --> Base class
class base
{
    int data1;

public:
    int data3;

    void setdata();
    int getdata1();
    int getdata_3();
};

void base ::setdata()
{
    data1 = 100;
    data3 = 300;
}

int base ::getdata1()
{
    return data1;
}

int base ::getdata_3()
{
    return data3;
}

//    --> Derived class

class derived : public base
{
    int data5;

public:
    void process();
    void display();
};

void derived::process()
{
    setdata(); // if our derived class is private we can call our fun here in dreived class methods.
    data5 = getdata1();
}

void derived ::display()
{

    cout << "the data of 1  is " << getdata1() << endl;
    cout << "the data of 3  is " << getdata_3() << endl;
    cout << "the data of 5 is " << data5 << endl;
}

int main()
{
    derived der;
    // der.setdata(); // we can also call this fun here if derived class id public.
    der.process();
    der.display();
    return 0;
}