#include <bits/stdc++.h>
using namespace std;

// Count the inversion in the Array.
// Two element arr[i] , arr[j] from an inversion  if  "arr[i] > arr[j] && i < j"

long long merge(int arr[], int low, int mid, int high)
{
    long long inversion = 0;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int a[n1], b[n2];

    int i, j, k;
    for (i = 0; i < n1; i++)
    {
        a[i] = arr[low + i];
    }

    for (i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }

    i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            // a[i] , a[i+1] ,a[i+2] ,a[i+3]  > b[j]
            inversion += n1 - i;
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
    return inversion;
}

// long long merge(int arr[], int low, int mid, int high)
// {
//     int i = low, j = mid + 1, k = 0, temp[high];
//     long long inv = 0;
//     while (i <= mid && j <= high)
//     {
//         if (arr[i] <= arr[j])
//         {
//             temp[k] = arr[i];
//             i++;
//         }
//         else
//         {
//             temp[k] = arr[j];
//             inv += mid + 1 - i;
//             j++;
//         }
//         k++;
//     }

//     while (i <= mid)
//     {

//         temp[k] = arr[i];
//         i++;
//         k++;
//     }
//     while (j <= high)
//     {

//         temp[k] = arr[j];
//         j++;
//         k++;
//     }
//     k = 0;
//     for (int i = low; i <= high; i++)
//     {
//         arr[i] = temp[k];
//         k++;
//     }
//     return inv;
// }

long long mergeSort(int arr[], int low, int high)
{
    long long inv = 0;
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        inv += mergeSort(arr, low, mid);
        inv += mergeSort(arr, mid + 1, high);

        inv += merge(arr, low, mid, high);
    }
    return inv;
}
int main()
{
    int arr[] = {3, 5, 6, 9, 1, 2, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << mergeSort(arr, 0, n - 1);

    return 0;
}