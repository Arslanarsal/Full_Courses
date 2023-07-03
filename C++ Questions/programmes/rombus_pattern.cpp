#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = rows; i > 0; i--)
    {
        for (int j = i - 1; j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < rows; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
