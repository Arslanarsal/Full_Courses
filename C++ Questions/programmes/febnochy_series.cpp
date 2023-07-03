#include <iostream>
#include <math.h>
using namespace std;
// void feb(int num)
// {
//     int t1 = 0;
//     int t2 = 1;
//     int nexterm;

//     for (int i = 0; i < num; i++)
//     {
//         cout << t1 << " ";
//         nexterm = t1 + t2;
//         t1 = t2;
//         t2 = nexterm;
//     }
// }
int feb(int num)
{
    if (num < 2)
    {
        return num;
    }

    return feb(num - 1) + feb(num - 2);
}
int main()
{
    int a;
    cout << "Enter the numbers: ";
    cin >> a;
    cout << feb(a);

    return 0;
}