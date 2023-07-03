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
    int decimal = last_value, a = last_value, count = 0;

    while (a > 0)
    {
        a = a / 16;
        count++;
    }
    char arr[count];
    int i = 0;

    while (decimal > 0)
    {
        rem = decimal % 16;
        decimal = decimal / 16;
        if (rem >= 0 && rem <= 9)
        {
            arr[i] = rem + 48;
            i++;
        }
        else
        {
            arr[i] = rem + 55;
            i++;
        }
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }

    return 0;
}