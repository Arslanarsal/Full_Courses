#include <iostream>
#include <math.h>
using namespace std;
int feb(int num)
{
    if (num < 2)
    {
        return 1;
    }

    return num * feb(num - 1);
}
int main()
{
    int a;
    cout << "Enter the numbers: ";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout<<feb(i)/(feb(i-j)*feb(j))<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}