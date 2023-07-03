#include <iostream>
using namespace std;
int main()
{
    string n;
    cout << "enter a number: ";
    cin >> n;

    int last_value = 0, base_condition = 1;
    int siz = n.size();
    cout << siz << endl;
    for (int i = siz - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            last_value = base_condition * (n[i] - '0') + last_value;
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            last_value = base_condition * (n[i] - '7') + last_value;
        }
        base_condition = base_condition * 16;
    }
    cout << last_value;
    return 0;
}