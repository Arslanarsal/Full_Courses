#include <iostream>
#include <string>
using namespace std;
string oct(int n)
{
    int a = n, count = 0, j = 0;
    while (a)
    {
        a = a / 16;
        count++;
    }
    char arr[count];
    while (n)
    {
        int y = n % 16;
        n = n / 16;
        if (y < 10)
        {
            y = y + 48;
        }
        else
        {
            y = y + 55;
        }
        arr[j] = y;
        j++;
    }
    string ans;
    for (int i = j - 1; i >= 0; i--)
    {
        ans += arr[i];
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
