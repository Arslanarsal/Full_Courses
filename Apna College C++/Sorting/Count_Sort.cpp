#include <bits/stdc++.h>
using namespace std;

// Time Complexity is   O(max(K)); K is the Largest number  int array
// Time Complexity is    O(max(n)); n is the size of original array
// Final Time Complexity is   O(max(n , K)); Which is larger 


void countSort(int arr[], int n)
{
    int k = arr[0];

    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }

    k = k + 1;
    int countarr[k] = {0};
    int Sortarr[n] = {0};

    for (int i = 0; i < n; i++)
    {
        countarr[arr[i]]++;
    }

    for (int i = 1; i < k; i++)
    {
        countarr[i] += countarr[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        Sortarr[--countarr[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = Sortarr[i];
    }
}

int main()
{

    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    countSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}