#include <BITS/stdc++.h>
using namespace std;

void printBinary(int num)
{

    for (int i = 7; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main()
{
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    // printBinary(9);
    // int a = 9;
    // int i = 0;
    //  --------->>>>>>>>> Check set and unset bit;
    // if (((a >> i) & 1))
    // {
    //     cout << "Set Bit " << endl;
    // }
    // else
    // {
    //     cout << "Unset bit " << endl;
    // }

    //--------->>>>>>>>>> Set bit on ith position
    // int b = (a | (1 << i));
    // printBinary(b);

    //--------->>>>>>>>>> Unset bit on ith position
    // int c = (a & (~(1 << i)));
    // printBinary(c);

    //--------->>>>>>>>>> (toggle)   Set 0 bit to 1 and 1 to 0
    // int d = (a ^ (1 << i));
    // printBinary(d);

    //------------->>>>>>>>>>>>>Count set bit in a binary
    // int count = 0;
    // for (int i = 31; i >= 0; i--)
    // {
    //     if (a & (1 << i))
    //     {
    //         count++;
    //     }
    // }
    // cout << count << endl;
    // cout << __builtin_popcount(9);
    // cout << __builtin_popcountll((1LL<<32)-1);

    //------------->>>>>>>>>>>  Even and Odd Number
    // for (int i = 0; i <= 10; i++)
    // {
    //     if (i & 1)
    //     {
    //         cout <<i<< "  Odd Number " << endl;
    //     }
    //     else
    //     {
    //         cout <<i<< "  Even Number " << endl;
    //     }
    // }

    //--------------->>>>>>>>>>>Number Divide by 2 and Multiply by 2
    // int e = 5;
    // cout << (e << 1) << endl; // Multiplt by 2    Left shift operator
    // cout << (e >> 1) << endl; // Divide by 2      Right shift operator

    //----------------->>>>>>>>>>>>>>>>> Upper Lower case Alphbates
    // cout << "----->>>>>Upper case \n";
    // for (char i = 'A'; i <= 'E'; i++)
    // {
    //     printBinary(int(i));
    // }
    // cout << "----->>>>>lower case \n";
    // for (char i = 'a'; i <= 'e'; i++)
    // {
    //     printBinary(int(i));
    // }]

    // char ch1 = 'A';  //----->>>>>>Upper to lower case
    // cout << char(ch1 | (1 << 5))<<endl;
    // cout << char(ch1 | ' ') << endl;

    // char ch2 = 'a';  // --------->>>>>>>lower to upper case
    // cout << char(ch2 & (~(1 << 5))) << endl;
    // cout << char(ch2 & '_') << endl;

    //------------>>>>>>>>>>>>>Clear MSB and LSB
    // int f = 255;
    // printBinary(f);
    // int i = 1;
    // int lsbClear = (f & (~((1 << (i + 1)) - 1))); //Clear LSB Bits
    // printBinary(lsbClear);

    // int MSBClear = (f & ((1 << (i + 1)) - 1));//Clear LSB Bits
    // printBinary(MSBClear);



//-------->>>>>>>>>>Left and right shift
    // int n = 15;
    // cout<<(n<<1)<<endl; // n Multiply by 2 -->(n*2)
    // cout<<(1<<n)<<endl; //   2^n
    // cout<<(1>>n)<<endl;  // Not opertor (!)
    // cout<<(n>>1)<<endl; // n divide by 2 -->(n/2)

    cout<<"sdkhbvjjshbvjhvb";
    return 0;
}