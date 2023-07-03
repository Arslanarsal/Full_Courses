#include <iostream>
using namespace std;
int main()
{
    int arr[] = {6, 3, 8, 4, 9, 3, 98, 1, 45, 98};
    for (int i = 1; i < 10; i++)
    {
        int y = arr[i];
        int j = i - 1;
        while (arr[j] > y && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = y;
    }
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
