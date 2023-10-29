// #include <bits/stdc++.h>
using namespace std;

// class List
// {
//     int A[100];
//     int current;
//     int size;

// public:

//     List()
//     {
//         current = -1;
//         size = 0;
//     }
//     void add(int x)
//     {
//         if (size > 100)
//         {
//             cout << "List is OverFlow" << endl;
//             return;
//         }
//         current++;
//         size++;
//         A[current] = x;
//     }

//     void find(int x)
//     {
//         for (int i = 0; i < size; i++)
//         {
//             if (A[i] == x)
//             {
//                 cout << "Value is found" << endl;
//                 return;
//             }
//         }
//         cout << "Value is Not in the list" << endl;
//         return;
//     }
//     int length()
//     {
//         return size;
//     }

//     void remove()
//     {
//         if (size == 0)
//         {
//             cout << "List is Empty" << endl;
//             return;
//         }
//         size--;
//     }

//     void Update(int x, int j)
//     {
//         if (j > size)
//         {
//             cout << "Wrong index" << endl;
//             return;
//         }
//         A[j] = x;
//     }

//     void add_at(int x, int j)
//     {
//         int i;
//         for (i = size; i > j; i--)
//         {
//             A[i] = A[i - 1];
//         }
//         A[i] = x;
//         size++;
//     }
//     void remove_at(int j)
//     {
//         for (int i = j; i < size; i++)
//         {
//             A[i] = A[i + 1];
//         }
//         size--;
//     }

//     int print()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << A[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     List a;
//     a.add(1);
//     a.add(2);
//     a.add(3);
//     a.add(4);
//     // a.find(2);
//     // a.Update(23,1);
//     // a.remove();
//     // a.remove_at(1);
//     // a.add_at(9, 0);
//     // cout << a.length() << endl;
//     a.print();

//     return 0;
// }

#include <iostream>

class ArrayList
{
private:
    int *arr;
    int size;
    int capacity;
    int currentIndex;

public:
    ArrayList(int initialCapacity = 10)
    {
        capacity = initialCapacity;
        size = 0;
        currentIndex = -1;
        arr = new int[capacity];
    }

    void resize()
    {
        int newCapacity = capacity * 2;
        int *newArr = new int[newCapacity];
        for (int i = 0; i < size; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        capacity = newCapacity;
    }

    void add(int addObject)
    {
        if (size == capacity)
        {
            resize();
        }
        size++;
        currentIndex++;
        arr[currentIndex] = addObject;
    }

    void add_front(int addObject)
    {
        if (size == capacity)
        {
            resize();
        }
        size++;
        for (int i = size - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = addObject;
        currentIndex++;
    }

    void update(int num, int add)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == num)
            {
                arr[i] = add;
                break;
            }
        }
    }

    void remove_num(int num)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == num)
            {
                for (int j = i; j < size - 1; j++)
                {
                    arr[j] = arr[j + 1];
                }
                size--;
                currentIndex--;
                break;
            }
        }
    }

    void remove_()
    {
        if (currentIndex >= 0)
        {
            for (int i = currentIndex; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            size--;
            currentIndex--;
        }
    }

    void start()
    {
        currentIndex = 0;
    }

    void tail()
    {
        currentIndex = size - 1;
    }

    void next()
    {
        if (currentIndex < size - 1)
        {
            currentIndex++;
        }
    }

    void back()
    {
        if (currentIndex > 0)
        {
            currentIndex--;
        }
    }

    void getcurrent()
    {
        if (currentIndex >= 0 && currentIndex < size)
        {
            cout << arr[currentIndex] << endl;
        }
        else
        {
            cout << "NULL" << endl;
        }
    }

    int Listsize()
    {
        return size;
    }

    void printList()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "->";
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    ArrayList myList;

    int choice;
    int num, addObject;

    do
    {
        cout << "Array List Menu:" << endl;
        cout << "  1. Add an element" << endl;
        cout << "  2. Update an element" << endl;
        cout << "  3. Remove an element" << endl;
        cout << "  4. Move to the next element" << endl;
        cout << "  5. Move to the previous element" << endl;
        cout << "  6. Move to the start of the list" << endl;
        cout << "  7. Move to the end of the list" << endl;
        // cout << "  8. Add an element to the front" << endl;
        cout << "  9. Print the list" << endl;
        cout << "  10. Get the current element" << endl;
        cout << "  11. Get the size of the list" << endl;
        cout << "  12. Remove the current element" << endl;
        cout << "  13. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element to add: ";
            cin >> addObject;
            myList.add(addObject);
            break;
        case 2:
            cout << "Enter the element to update: ";
            cin >> num;
            cout << "Enter the new value: ";
            cin >> addObject;
            myList.update(num, addObject);
            break;
        case 3:
            cout << "Enter the element to remove: ";
            cin >> num;
            myList.remove_num(num);
            break;
        case 4:
            myList.next();
            break;
        case 5:
            myList.back();
            break;
        case 6:
            myList.start();
            break;
        case 7:
            myList.tail();
            break;
        case 8:
            myList.printList();
            break;
        case 9:
            myList.getcurrent();
            break;
        case 11:
            cout << "List size: " << myList.Listsize() << endl;
            break;
        case 12:
            myList.remove_();
            break;
        case 13:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 13);

    return 0;
}
