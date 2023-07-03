#include <iostream>
using namespace std;

bool isPowerOf2(int n)
{
    int a = n & (n - 1);
    return n && !(a);
}

int main()
{
    cout << isPowerOf2(16);
    return 0;
}