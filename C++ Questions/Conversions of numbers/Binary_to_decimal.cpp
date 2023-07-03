#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int rem, last_value = 0, base_condition = 1;
    /*  32  16  8   4   2   1  --> this table is n^2
                1   1   0   1  --> binary number  (13)

        -->working from  right to left

          16    8       4       2     1      --> n^2
                *       *       *     *
                1       1       0     1
                =       =       =     =
               13   =+  5  =+   1  =+ 1

                --> n = 0

    working    first multiply last digit from line 9 and 10
        is (1 * 1 = 1); 1 * 1 + n(0) = n(1)

        then multiply second last digits 2 and 0 (2*0=0)
         and add in last multiply digits ;--> 0 + n(1) = n(1)

        then multiply third last digits 4 and 1 (4*1=4)
        and add in second multiply digits;--> 4 + n(1) = n(5)

        then multiply forth last digits 8 and 1 (8*1=8)
         and add in third multiply digits;--> 8 + n(5) = n(13)

    */
    while (n > 0)
    {
        rem = n % 10;
        last_value = rem * base_condition + last_value;
        n = n / 10;
        base_condition = base_condition * 2;
    }
    int Decimal = last_value;
    cout << "Your number in becimal form: " << Decimal;
    return 0;
}