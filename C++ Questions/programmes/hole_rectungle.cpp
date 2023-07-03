#include <iostream>
using namespace std;
int main()
{
    int rows, colm;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of colm: ";
    cin >> colm;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == colm - 1)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}