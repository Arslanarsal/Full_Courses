#include <iostream>
using namespace std;
void printnum(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";
    printnum(n - 1);
    cout<<endl;
    cout << n << " ";
    
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    printnum(n);
    return 0;
}