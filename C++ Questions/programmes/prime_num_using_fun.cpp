#include <iostream>
using namespace std;

bool fint_prime_1_to_n(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (fint_prime_1_to_n(i))
        {
            cout<<i<<" ";
        }
    }
    
    
    return 0;
}