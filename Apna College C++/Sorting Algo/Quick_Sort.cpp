#include <bits/stdc++.h>
using namespace std;

// Time Complexity is O(n^2) in worst case
// Time Complexity is O(nlogn) in best case



// -------------->>>>>>>>>>>>>>>Pivot is the Starting element
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    } while (i < j);

    arr[low] = arr[j];
    arr[j] = pivot;

    return j;
}



// -------------->>>>>>>>>>>>>>>Pivot is the Starting element
// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[high];
//     int i = low - 1;

//     for (int j = low; j < high; j++)
//     {
//         if (arr[j] <= pivot)
//         {
//             i++;

//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }

//     arr[high] = arr[i + 1];
//     arr[i + 1] = pivot;

//     return i + 1;
// }

void quickSort(int arr[], int start, int end)
{
    int piIdx;
    if (start < end)
    {
        piIdx = partition(arr, start, end);

        quickSort(arr, start, piIdx - 1);
        quickSort(arr, piIdx + 1, end);
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
    int array[] = {9, 8, 5, 7};
    int n = 4; // sizeof(array) / sizeof(array[0]);
    printArray(array, n);
    quickSort(array, 0, n - 1);
    printArray(array, n);

    return 0;
}