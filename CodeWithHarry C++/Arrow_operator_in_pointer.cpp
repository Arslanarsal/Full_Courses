#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void get_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void set_data()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};
/*
Arrow operator deference the pointer and then point set_data
When we use Arrow we don't need star(*) defore pointer [--like (*ptr)]
because Arrow automaticaly deference the pointer
*/
int main()
{
    // complex c1;
    // c1.get_data(3,4);
    // c1.set_data();

    //  complex c1;
    //  complex *ptr1 = &c1;
    // (*ptr1).get_data(3,4);
    // ptr1->set_data();

    // complex *ptr1 = new complex;
    // ptr1->get_data(3, 4);
    // ptr1->set_data();

    //    --> Array of object using pointers
    complex *ptr1 = new complex[4];
    (ptr1 + 1)->get_data(3, 4);
    (ptr1 + 1)->set_data();
    return 0;
}