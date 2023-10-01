#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void inseert(int val)
    {
        size++;
        int idx = size;
        arr[idx] = val;
        while (idx > 1)
        {
            int parent = idx / 2;
            if (idx <= size && arr[parent] < arr[idx])
            {
                swap(arr[parent], arr[idx]);
            }
            else
            {
                return;
            }
            idx = parent;
        }
    }

    void deletion()
    {
        if (size == 0)
        {
            return;
        }

        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int leftnode = 2 * i;
            int rightnode = 2 * i + 1;
            if (leftnode < size && arr[leftnode] > arr[i])
            {
                swap(arr[leftnode], arr[i]);
                i = leftnode;
            }
            else if (rightnode < size && arr[rightnode] > arr[i])
            {
                swap(arr[rightnode], arr[i]);
                i = rightnode;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        swap(arr[1], arr[size]);
        size--;
        heapify(arr, size, 1);
    }
}
int main()
{
    // heap h;
    // h.inseert(50);
    // h.inseert(55);
    // h.inseert(53);
    // h.inseert(52);
    // h.inseert(54);
    // h.print();

    // h.deletion();
    // h.print();

    int arr[] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    // Heapify
     for (int i = n / 2; i > 0; i--)
     {
         heapify(arr, n, i);
     }
    heapSort(arr, n);
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}