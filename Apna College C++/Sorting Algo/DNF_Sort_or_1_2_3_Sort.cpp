#include <bits/stdc++.h>
using namespace std;


// Time Complexity is  O(n)
// DNF Stand for "Dutch National Flag" 
// And also called 1,2,3 Sort


void DNFSort(int arr[], int n)
{
    int mid = 0, low = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 0, 1, 1, 2, 1, 0, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    DNFSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}