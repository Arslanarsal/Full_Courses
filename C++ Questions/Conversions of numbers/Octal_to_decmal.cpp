#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int rem, base_condition = 1, last_value = 0;

    /*
    working    2754  convert in decimal;

                    -->working feom rignt to left

            4096    512     64      8     1      --> n^8
                    *       *       *     *
                    2       7       5     4
                    =       =       =     =
                   1516 =+  492  =+ 44  =+ 4

    */

    while (n > 0)
    {
        rem = n % 10;
        last_value = rem * base_condition + last_value;
        n = n / 10;
        base_condition = base_condition * 8;
    }
    int Decimal = last_value;
    cout << "Your number in becimal form: " << Decimal;

    return 0;
}