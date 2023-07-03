#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int tem = arr[j];
                arr[j] = arr[i];
                arr[i] = tem;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}