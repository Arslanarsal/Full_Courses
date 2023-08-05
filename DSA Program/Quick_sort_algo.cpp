#include <iostream>
using namespace std;

int partition(int *a, int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (a[i] <= pivot)
        {
            i++;
        } 
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);
    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int quickSort(int a[], int low, int high)
{
    int partitionindux;
    if (low < high)
    {
        partitionindux = partition(a, low, high);
        quickSort(a, low, partitionindux - 1);
        printArray(a  , 9);
        quickSort(a, partitionindux + 1, high);
    }
}

int main()
{
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 9; // sizeof(array) / sizeof(array[0]);
    printArray(array, n);
    quickSort(array, 0, n - 1);
    printArray(array, n);
    return 0;
}

// #include <stdio.h>

// void printArray(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }

// int partition(int A[], int low, int high)
// {
//     int pivot = A[low];
//     int i = low + 1;
//     int j = high;
//     int temp;

//     do
//     {
//         while (A[i] <= pivot)
//         {
//             i++;
//         }

//         while (A[j] > pivot)
//         {
//             j--;
//         }

//         if (i < j)
//         {
//             temp = A[i];
//             A[i] = A[j];
//             A[j] = temp;
//         }
//     } while (i < j);

//     // Swap A[low] and A[j]
//     temp = A[low];
//     A[low] = A[j];
//     A[j] = temp;
//     return j;
// }

// void quickSort(int A[], int low, int high)
// {
//     int partitionIndex; // Index of pivot after partition

//     if (low < high)
//     {
//         partitionIndex = partition(A, low, high);
//         quickSort(A, low, partitionIndex - 1);  // sort left subarray
//         quickSort(A, partitionIndex + 1, high); // sort right subarray
//     }
// }

// int main()
// {
//     int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
//     // int A[] = {9, 4, 4, 8, 7, 5, 6};

//     // 3, 5, 2, 13, 12, 3, 2, 13, 45
//     // 3, 2, 2, 13i, 12, 3j, 5, 13, 45
//     // 3, 2, 2, 3j, 12i, 13, 5, 13, 45 --> first call to partition returns 3

//     int n = sizeof(A)/ sizeof(A[0]);
//     // n =7;
//     printArray(A, n);
//     quickSort(A, 0, n - 1);
//     printArray(A, n);
//     return 0;
// }
