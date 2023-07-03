#include <iostream>
#include <string>
using namespace std;
int oct(int n)
{
    int a = n, count = 0, j = 0;
    while (a)
    {
        a = a / 8;
        count++;
    }
    int arr[count];
    while (n)
    {
        int rem = n % 8;
        n = n / 8;
        arr[j] = rem;
        j++;
    }
    int ans = 0;
    for (int i = j - 1; i >= 0; i--)
    {
        ans = (ans * 10) + arr[i];
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
