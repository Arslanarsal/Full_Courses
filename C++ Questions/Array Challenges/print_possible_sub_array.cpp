#include <iostream>
#include<climits>

using namespace std;
int main()
{

    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value: ";// 2 3 4 5
        cin >> arr[i];
    }
    int sum = 0;
    int maxe = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k]<<" ";
                sum +=arr[k];
            }
            maxe = max(maxe , sum);
            cout << endl;
            sum=0;
        }
    }
    cout<<endl<<maxe;
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter value: ";
//         cin >> arr[i];
//     }
//     int sum = 0, maxi = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//         if (sum < 0)
//         {
//             sum = 0;
//         }
//         if (sum > maxi)
//         {
//             maxi = sum;
//         }
//     }
//     cout << maxi;
//     return 0;
// }
