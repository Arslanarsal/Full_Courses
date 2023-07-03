#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int arr[4] = {-1, 4, 7, 2};
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            int a = 0;
            for (int k = i; k <= j; k++)
            {
                a += arr[k];
            }
            sum = max(sum, a);
        }
    }
    cout<<sum;
    return 0;
}