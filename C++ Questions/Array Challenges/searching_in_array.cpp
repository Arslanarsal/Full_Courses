#include <iostream>
using namespace std;
//     --> time compalasity is    O(n)
// int searchingArrar(int arr[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

int binarySearch(int arr[], int n, int key)
{
    int e = n , s = 0;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
    
}

int main()
{
    int n, key;
    cout << "enter size : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter key: ";
    cin >> key;
    // cout << searchingArrar(arr, n, key);
    cout << binarySearch(arr, n, key);

    return 0;
}