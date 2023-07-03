#include <iostream>
using namespace std;
int main()
{
    int h = 1;
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << h<<" ";
            h++;
        }
        cout << endl;
    }
    return 0;
}