#include <iostream>
using namespace std;
// void mergSort(int A[], int mid, int low, int high)
// {
//     int i, j, k, B[100];
//     i = low;
//     j = mid + 1;
//     k = low;

//     while (i <= mid && j <= high)
//     {
//         if (A[i] < A[j])
//         {
//             B[k] = A[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             B[k] = A[j];
//             j++;
//             k++;
//         }
//     }
//     while (i <= mid)
//     {
//         B[k] = A[i];
//         k++;
//         i++;
//     }
//     while (j <= high)
//     {
//         B[k] = A[j];
//         k++;
//         j++;
//     }
//     for (int i = low; i <= high; i++)
//     {
//         A[i] = B[i];
//     }
// }

void mergSort(int a[], int mid, int low, int high)
{
    int i = low;
    int j = mid + 1;
    int k = 0;
    int B[high];

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            B[k] = a[i];
            i++;
            k++;
        }
        else
        {
            B[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        B[k] = a[j];
        j++;
        k++;
    }
    k = 0;
    for (int i = low; i <= high; i++)
    {
        a[i] = B[k];
        k++;
    }
}
void mergrecur(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergrecur(a, low, mid);
        mergrecur(a, mid + 1, high);
        mergSort(a, mid, low, high);
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
    int array[] = {3 ,7,1,9,3};
    int n = 5; // sizeof(array) / sizeof(array[0]);
    printArray(array, n);
    mergrecur(array, 0, n - 1);
    printArray(array, n);
    return 0;
}