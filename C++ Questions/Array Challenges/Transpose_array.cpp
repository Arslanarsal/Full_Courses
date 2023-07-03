#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter row size: ";
    cin >> x;
    cout << "Enter coloum size: ";
    cin >> y;
    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "enter value: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = i; j < y; j++)
        {
            int tem = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = tem;
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}