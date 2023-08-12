#include <bits/stdc++.h>
using namespace std;

//   Time Complexity is O(n/2) = O(n);

//   Wave Sort is  arr[n-(n-0)] >= arr[n-(n-1)] <= arr[n-(n-2)] >= arr[n-(n-3)] <= arr[n-(n-4)].....
//   Wave Sort is  arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5].......

//  Even Number is large around his odd number;   arr[odd]  <= arr[Even] >=arr[odd]
//  Odd Number is small around his even number;   arr[even] >= arr[Odd]  <=arr[even]

void waveSort(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }

        if (arr[i] > arr[i + 1] && i < n - 1)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[] = {1, 3, 4, 7, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    waveSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}