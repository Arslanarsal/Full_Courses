#include <iostream>
using namespace std;
int main()
{
    int n, rem, last_value = 0, base_condition = 1;
    cout << "enter a number: ";
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        last_value = rem * base_condition + last_value;
        n = n / 10;
        base_condition = base_condition * 8;
    }
    int decimal = last_value, count = 0;
    int a = decimal;
    while (a > 0)
    {
        a = a / 2;
        count++;
    }
    int arr[count], i = 0;
    while (decimal)
    {
        rem = decimal % 2;
        decimal = decimal / 2;
        arr[i] = rem;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }

    return 0;
}