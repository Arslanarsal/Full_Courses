#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value: ";
        cin >> arr[i];
    }
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    int findArr[largest];
    for (int i = 0; i < largest; i++)
    {
        findArr[i] = -1;
    }
    int mindix = largest;
    for (int i = 0; i < largest; i++)
    {

        if (findArr[arr[i]] == -1)
        {
            findArr[arr[i]] = i;
        }
        else
        {
            mindix = min(findArr[arr[i]], mindix);
        }
    }
    cout << mindix + 1;
    return 0;
}