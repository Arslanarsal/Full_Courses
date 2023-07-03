#include <iostream>
using namespace std;

class num
{
    int a;

public:
    // num set_data(float a)
    void set_data(float a)
    {
        this->a = a;
        // return *this;
    }
    void display_data()
    {
        cout << "The value of a is: " << a << endl;
    }
};
/*
'This' is a keyword which is a pointer that point out the 
Object which is invoked member function

And This pointer return the object 
the object type is class name here we return object 'A' his
type is class name 'num'

*/
int main()
{
    num A;

    A.set_data(4);
    A.display_data();

    // A.set_data(4).display_data();
    
    return 0;
}