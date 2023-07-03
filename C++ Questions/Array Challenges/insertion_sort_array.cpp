#include <iostream>
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

    for (int i = 1; i < n; i++)
    {
        int check = arr[i];
        int j = i - 1;
        while (arr[j] > check && j >= 0)
        {
            arr[j + 1] = arr[j];
           
            j--;
        }
        arr[j + 1] = check;
    }



    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // int counter = 1;
    // while (counter < n)
    // {
    //     for (int i = counter; i > 0; i--)
    //     {
    //         if (arr[i] < arr[i - 1])
    //         {
    //             int tem = arr[i];
    //             arr[i] = arr[i - 1];
    //             arr[i - 1] = tem;
    //         }
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    //     cout<<endl;
    //     counter++;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}