#include <iostream>
using namespace std;
int main()
{
    int n, find, sum = 0;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value: ";
        cin >> arr[i];
    }
    cout << "Enter sum to find: ";
    cin >> find;
    int start = 0, end = 0;

    while (end < n && sum + arr[end] < find)
    {
        sum += arr[end];
        end++;
    }
    if (sum == find)
    {
        cout << start << "  " << end;
        return 0;
    }

    while (end < n)
    {
        sum += arr[end];
        while (sum > find)
        {
            sum -= arr[start];
            start++;
        }

        if (sum == find)
        {
            cout << start + 1 << "  " << end+1;
            break;
        }
        end++;
    }

    // for (int i = 0; sum < find; end++)
    // {
    //     sum = arr[end] + sum;
    //     if (sum == find)
    //     {
    //         cout << start + 1 << "  " << end + 1;
    //     }
    //     else if (sum > find)
    //     {
    //         for (int i = 0; sum > find; start++)
    //         {
    //             sum = sum - arr[start];
    //         }
    //         if (sum == find)
    //         {
    //             cout << start + 1 << "  " << end + 1;
    //         }
    //     }
    // }

    return 0;
}