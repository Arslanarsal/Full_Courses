#include <iostream>
using namespace std;
void root(int arr[], int data)
{
    // if (arr[0] == '\0')
    // {
        arr[0] = data;
        return;
    // }
    // cout << "Already have tree " << endl;
}
void left_side(int arr[], int data, int parent)
{
    if (arr[parent] == '\0')
    {
        cout << "Can't add child " << endl;
        return;
    }
    arr[(parent * 2) + 1] = data;
}
void right_side(int arr[], int data, int parent)
{
    if (arr[parent] == '\0')
    {
        cout << "Can't add child " << endl;
        return;
    }
    arr[(parent * 2) + 2] = data;
}
void print(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
int main()
{
    int array[7];
    root(array, 7);

    left_side(array, 8, 0);
    right_side(array, 9, 0);

    left_side(array, 10, 1);
    right_side(array, 11, 1);

    // left_side(array, NULL, 2);
    right_side(array, 13, 2);

    print(array);

    return 0;
}