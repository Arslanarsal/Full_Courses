#include <iostream>
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
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    
    int tempArr[largest];
    for (int i = 0; i < largest; i++)
    {
        tempArr[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        tempArr[arr[i]] = true;
    }
    for (int i = 0; i < largest; i++)
    {
        if (tempArr[i] == false)
        {
            cout << i;
            break;
        }
    }
    return 0;
}