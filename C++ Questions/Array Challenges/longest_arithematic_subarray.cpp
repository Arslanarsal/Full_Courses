#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "enter size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j = 2;
    int pre_dif = arr[1] - arr[0];
    int count = 2, long_array = 2;
    while (j < n)
    {
        if (pre_dif == arr[j] - arr[j - 1])
        {
            count++;
        }
        else
        {
            pre_dif = arr[j] - arr[j - 1];
            count = 2;
        }
        long_array = max(long_array, count);
        j++;
    }
    cout <<"longest arithematic array is: "<< long_array;

    return 0;
}