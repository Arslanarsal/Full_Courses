#include <iostream>
using namespace std;
int oct(int n){
    int ans  =0;
    int base = 1;
    while (n)
    {
        int y = n % 10;
        ans = ans + (base * y);
        base = base * 8;
        n = n / 10;
    }
    return ans;
    
}
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    cout << oct(n);

    return 0;
}
