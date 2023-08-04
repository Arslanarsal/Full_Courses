#include <iostream>
using namespace std;
template <class P>

class vector
{
public:
    P *arr;
    int size;
    vector(int s)
    {
        size = s;
        arr = new P[size];
    }
    P dotProduct(vector v1)
    {
        P b = 0;
        for (int i = 0; i < size; i++)
        {
            b += this->arr[i] * v1.arr[i];
        }
        return b;
    }
};

// class add
// {
// public:
//     T a;
//     T b;

//     add(T x, T y)
//     {
//         a = x;
//         b = y;
//     }
//     void display()
//     {
//         cout << "The value of a is " << a << " and b is " << b << endl;
//     }
// };

// class template in multiple parameters
// template <class T1, class T2>
// class add
// {
// public:
//     T1 a;
//     T2 b;

//     add(T1 x, T2 y)
//     {
//         a = x;
//         b = y;
//     }
//     void display()
//     {
//         cout << "The value of a is " << a << " and b is " << b << endl;
//     }
// };

// class template in default parameters
template <class T1 = int, class T2 = float, class T3 = char>
class add
{
public:
    T1 a;
    T2 b;
    T3 c;

    add(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << " and b is " << b << " and C is " << c << endl;
    }
};
/*
in template we pass variable type
*/
int main()
{
    // -->
    // add <int>c1(3.4, 4.6);
    // c1.display();

    // add <float>c2(3.4, 4.6);
    // c2.display();

    // -->
    // vector<int> v2(3);
    // v2.arr[0] = 3;
    // v2.arr[1] = 2;
    // v2.arr[2] = 6;

    // vector<int> v3(3);
    // v3.arr[0] = 1;
    // v3.arr[1] = 0P
    // v3.arr[2] = 1;

    // int b = v3.dotProduct(v2);
    // cout << b << endl;

    // -->
    // vector<float> v2(3);
    // v2.arr[0] = 1.4;
    // v2.arr[1] = 3.3;
    // v2.arr[2] = 0.1;

    // vector<float> v3(3);
    // v3.arr[0] = 0.1;
    // v3.arr[1] = 1.90;
    // v3.arr[2] = 4.1;

    // float b = v3.dotProduct(v2);
    // cout << b << endl;

    // add <char , int>c2('C',7);
    // c2.display();
// -->
    add<> c2(5, 7.4, 'C');
    // add<int, float, char> c2(5, 7.4, 'C');
    c2.display();

    return 0;
}