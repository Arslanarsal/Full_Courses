#include <iostream>
using namespace std;
class num
{
    int a, b;

public:
    /*
    Noted:
        when we initilization the value along with construct function
        the value initilizition according to the variables who we write
        before here line no 5.
    */
    // num(int x, int y) : a(x), b(y)
    // num(int x, int y) : a(x), b(x+y)
    // num(int x, int y) : a(x+y), b(y)
    // num(int x, int y) : a(x), b(a+y)
    // num(int x, int y) : a(b+x), b(y) // this will give garbidg value because first
                                         // a call and then b call
    // num(int x, int y) :  b(y+a),a(x)
    num(int x, int y) : b(y), a(x + b) // this will give garbidg value because first
                                       // a call and then b call
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};

int main()
{
    num c1(4, 5);
    return 0;
}