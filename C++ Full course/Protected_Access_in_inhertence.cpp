#include <iostream>
using namespace std;
// --> Base class
class base
{
    int a;

protected:
    int b;

public:
    int c;
};

// --> Derived class
class derived : protected base
{
    int d;
    public:
     int e;
};

/*                         --> 3 types of Derived or inhertance
                       public derived   private derived   protected derived
1. private member      not inherite     not inherite      not inherite 
2. protected member    protected        private           protected 
3. public member       public           private           protected
*/

main()
{
    base b1;
    cout << b1.c;
    derived d1;
    d1.e;

    return 0;
}