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
        cout<<"Enter value: ";
        cin >> arr[i];
    }

    int count = 1;
    while (n > count)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int tem = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tem;
            }
        }
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}