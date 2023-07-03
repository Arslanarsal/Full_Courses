#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter a number: ";
    cin >> n;

    int count = 0;
    int a = n;
    while (a)
    {
        a = a / 8;
        count++;
    }
    int arr[count], rem, i = 0;

    while (n)
    {
        rem = n % 8;
        n = n / 8;
        arr[i] = rem;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }

    return 0;
}