#include <iostream>
using namespace std;
int main()
{
    int decimalNum, rem, i = 0, arry_size = 0;
    cout << "Enter the Decimal Number: ";
    cin >> decimalNum;
    int a = decimalNum;
    while (a)
    {
        a = a / 16;
        arry_size++;
    }

    char hexaDecimalNum[arry_size];
    while (decimalNum != 0)
    {
        rem = decimalNum % 16;
        if (rem < 10)
            rem = rem + 48;
        else
            rem = rem + 55;
        hexaDecimalNum[i] = rem;
        i++;
        decimalNum = decimalNum / 16;
    }
    cout << "Hexadecimal Value: ";
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDecimalNum[j];
    cout << endl;
    return 0;
}