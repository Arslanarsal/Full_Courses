#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    int rem, i = 0, count = 0;
    int a = n;
    
    while (a)
    {
        a = a / 2;
        count++;
    }

    int arr[count];

    while (n)
    {
        rem = n % 2;
        n = n / 2;
        arr[i] = rem;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }

    return 0;
}