#include <bits/stdc++.h>
using namespace std;

class List
{
    int A[100];
    int current;
    int size;

public:
    
    List()
    {
        current = -1;
        size = 0;
    }
    void add(int x)
    {
        if (size > 100)
        {
            cout << "List is OverFlow" << endl;
            return;
        }
        current++;
        size++;
        A[current] = x;
    }

    void find(int x)
    {
        for (int i = 0; i < size; i++)
        {
            if (A[i] == x)
            {
                cout << "Value is found" << endl;
                return;
            }
        }
        cout << "Value is Not in the list" << endl;
        return;
    }
    int length()
    {
        return size;
    }

    void remove()
    {
        if (size == 0)
        {
            cout << "List is Empty" << endl;
            return;
        }
        size--;
    }

    void Update(int x, int j)
    {
        if (j > size)
        {
            cout << "Wrong index" << endl;
            return;
        }
        A[j] = x;
    }

    void add_at(int x, int j)
    {
        int i;
        for (i = size; i > j; i--)
        {
            A[i] = A[i - 1];
        }
        A[i] = x;
        size++;
    }
    void remove_at(int j)
    {
        for (int i = j; i < size; i++)
        {
            A[i] = A[i + 1];
        }
        size--;
    }

    int print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    List a;
    a.add(1);
    a.add(2);
    a.add(3);
    a.add(4);
    // a.find(2);
    // a.Update(23,1);
    // a.remove();
    // a.remove_at(1);
    // a.add_at(9, 0);
    // cout << a.length() << endl;
    a.print();

    return 0;
}