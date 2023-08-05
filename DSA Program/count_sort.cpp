#include <iostream>
#include <limits.h>
using namespace std;
int maximum(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
}

void countSort(int a[], int n)
{
    int max = maximum(a, n);
    int *count = new int(max + 1);
    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    int j = 0;
    int i = 0;
    while (i <= max)
    {
        if (count[i] > 0)
        {
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
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
    countSort(array, n);
    printArray(array, n);
    return 0;
}