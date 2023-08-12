#include <bits/stdc++.h>
using namespace std;

// Time Complexity is O(nlogn) Here (n) is merge function time complexity
// And (Log n) is  MergeSort function Time complexity

// void merge(int arr[], int low, int mid, int high)
// {
//     int i = low, j = mid + 1, k = 0, temp[high];

//     while (i <= mid && j <= high)
//     {
//         if (arr[i] < arr[j])
//         {
//             temp[k] = arr[i];
//             i++;
//         }
//         else
//         {
//             temp[k] = arr[j];
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
// }


//Both ways are corrects
void merge(int arr[], int low, int mid, int high)
{

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
}

void mergeSort(int arr[], int start, int end)
{
    int mid;
    if (start < end)
    {
        mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[] = {3, 7, 1, 9, 3};
    int n = sizeof(array) / sizeof(array[0]);
    printArray(array, n);
    mergeSort(array, 0, n - 1);
    printArray(array, n);
    return 0;
}