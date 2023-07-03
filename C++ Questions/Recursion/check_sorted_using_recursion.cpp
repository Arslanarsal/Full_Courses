#include <iostream>
using namespace std;
int checksort(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    cout << arr[0] << "  " << arr[n-1] << endl;
    bool newarrr = checksort(arr + 1, n - 1);
    
    cout << arr[0] << "  " << arr[1] << "  " << newarrr << endl;
    return arr[0] < arr[1] && newarrr;
}
int main()
{
    int arr[] = {1, 2, 39, 4, 13};
    cout << checksort(arr, 5);
    return 0;
}
