#include <iostream>
using namespace std;

void PrimeFactor(int n)
{
    int arrayprime[n] = {0};
    for (int i = 0; i <= n; i++)
    {
        arrayprime[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (i * i > n)
        {
            break;
        }
        if (arrayprime[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (arrayprime[j] == j)
                {
                    arrayprime[j] = i;
                }
            }
        }
    }
    while (n != 1)
    {
        cout << arrayprime[n]<<" ";
        n = n / arrayprime[n];
    }
}

void printPrime(int n)
{
    int primeArray[n] = {0};
    // int h = 1;
    for (int i = 2; i <= n; i++)
    {
        if (i * i > n)
        {
            break;
        }
        // cout << h << " ";
        // h++;
        if (primeArray[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                primeArray[j] = 1;
            }
        }
    }
    cout << endl;
    for (int i = 2; i <= n; i++)
    {
        if (primeArray[i] == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    // printPrime(n);
    PrimeFactor(n);
    return 0;
}