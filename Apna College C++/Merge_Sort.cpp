#include <bits/stdc++.h>
using namespace std;

// Time Complexity is O(nlogn) Here (n) is merge function time complexity 
//And (Log n) is  MergeSort function Time complexity 


void merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0, temp[high];

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {

        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {

        temp[k] = arr[j];
        j++;
        k++;
    }
    k = 0;
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[k];
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
    int n = 5; // sizeof(array) / sizeof(array[0]);
    printArray(array, n);
    mergeSort(array, 0, n - 1);
    printArray(array, n);
    return 0;
}