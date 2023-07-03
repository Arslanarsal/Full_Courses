#include <iostream>
using namespace std;
int feb(int n)
{
    if (n<=1)
    {
        return n;
    }
    
    return feb(n - 1) + feb(n - 2);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<<feb(n);
    return 0;
}