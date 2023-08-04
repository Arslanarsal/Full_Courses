// difference between pointer and reference is pointer is store variable adress
// and reference is another name of variable

#include <iostream>
using namespace std;

// void swap(int x, int y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// void swappoint(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

void swapreference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    
}

int main()
{

    int a, b;
    cout << "enter two number : ";
    cin >> a >> b;
    cout << "the value of a and b is before swap \n";
    cout << a << b << endl;
    //      --> call by value it not swap value

    // cout << "the value of a and b is after swap \n";
    // swap(a, b);
    //  cout << a << b<<endl;
    //                  --> swap using pointers it's swap
    // cout << "the value of a and b is after swap \n";
    // swappoint(&a, &b);
    // cout << a << b<<endl;

    //                  --> swap using reference variable it's swap
    cout << "the value of a and b is after swap \n";
    swapreference(a, b);
    cout << a << b << endl;
    return 0;
}