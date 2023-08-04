#include <iostream>
using namespace std;

template <class t>
class num
{
public:
    t a;
    num(t x)
    {
        a = x;
    }
    void display();
};

template <class t>
void num<t>::display()
{
    cout << "The value of a is " << a << endl;
}

void add(int a){
    cout<<"The value of a is in int "<<a<<endl;
}

template<class t>
void add(t a){
    cout<<"The value of a is in template "<<a<<endl;
}

int main()
{
    // num <int>c1(3);
    // c1.display();
    // num <float>c2(0.75);
    // c2.display();
    // num <char>c3('C');
    // c3.display();

    add(3);//Exate match take the high priority
    add(3.4);
    add('C');
    return 0;
}