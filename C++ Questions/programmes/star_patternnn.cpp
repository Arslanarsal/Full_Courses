#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = rows - 1; i > 0; i--)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}
