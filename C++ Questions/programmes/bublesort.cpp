#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 4, 45, 13, 57, 6, 41, 3, 7};
    int count = 1;
    while (9 > count)
    {
        for (int i = 0; i < 9 - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        count++;
    }
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}