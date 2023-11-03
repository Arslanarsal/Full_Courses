#include <iostream>
using namespace std;

class ArrayList
{
    int size;
    int array[100];
    int currentIdx;

public:
    ArrayList()
    {
        size = 0;
        currentIdx = -1;
    }

    // Add an element in the list
    void add(int addObject)
    {
        if (size < 100)
        {
            currentIdx++;
            if (currentIdx < size)
            {
                // Move existing elements to the right to make space for the new element
                for (int i = size; i > currentIdx; i--)
                {
                    array[i] = array[i - 1];
                }
            }
            array[currentIdx] = addObject; // Add the element at the current index
            size++;
        }
        else
        {
            cout << "List is full. Cannot add more elements." << endl;
        }
    }

    // Update an element at a specific index
    void update(int idx, int add)
    {
        idx -= 1;
        if (idx >= 0 && idx < size)
        {
            array[idx] = add;
            currentIdx = idx;
        }
        else
        {
            cout << "Invalid index." << endl;
        }
    }

    // Add an element at a specific index
    void add_at(int addObject, int idx)
    {
        if (size >= 100)
        {
            cout << "List is full. Cannot add more elements." << endl;
            return;
        }
        else if (size == 0 && idx == 1)
        {
            currentIdx++;
            array[currentIdx] = addObject;
            size++;
            return;
        }
        if (idx >= 0 && idx <= size)
        {
            idx--;u
            currentIdx = idx;
            add(addObject);
        }
        else
        {
            cout << "Invalid index." << endl;
        }
    }

    // Remove an element at a specific index
    void remove_at(int idx)
    {
        idx -= 1;
        if (idx >= 0 && idx < size)
        {
            for (int i = idx; i < size - 1; i++)
            {
                array[i] = array[i + 1];
            }
            size--;
            currentIdx = idx;
        }
        else
        {
            cout << "Invalid index." << endl;
        }
    }

    void remove()
    {
        if (currentIdx < size)
        {
            for (int i = currentIdx; i < size - 1; i++)
            {
                array[i] = array[i + 1];
            }
            size--;
        }
        else
        {
            cout << "Invalid index." << endl;
        }
    }

    // Get the size of the list
    int ListSize()
    {
        return size;
    }

    // Print the entire list
    void printList()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    // Move the current index to the start of the list
    void start()
    {
        currentIdx = 0;
    }

    // Move the current index to the end of the list
    void end()
    {
        currentIdx = size - 1;
    }

    // Move to the next element
    void next()
    {
        if (currentIdx < size - 1)
        {
            currentIdx++;
        }
    }

    // Move to the previous element
    void back()
    {
        if (currentIdx > 0)
        {
            currentIdx--;
        }
    }

    // Get the value of the current element
    int getcurrent()
    {
        if (currentIdx >= 0 && currentIdx < size)
        {
            return array[currentIdx];
        }
        return -1; // Invalid index
    }
};

int main()
{
    ArrayList myList; // Create an instance of the ArrayList class

    int choice;
    int value, index;

    do
    {
        // Display the menu
        cout << "\nArrayList Menu:" << endl;
        cout << "           1. Add an element in the list" << endl;
        cout << "           2. Add an element at a specific index" << endl;
        cout << "           3. Update an element at a specific index" << endl;
        cout << "           4. Remove an element at a specific index" << endl;
        cout << "           5. Get the size of the list" << endl;
        cout << "           6. Print the list" << endl;
        cout << "           7. Move to the start of the list" << endl;
        cout << "           8. Move to the end of the list" << endl;
        cout << "           9. Move to the next element" << endl;
        cout << "           10. Move to the previous element" << endl;
        cout << "           11. Get the value of the current element" << endl;
        cout << "           12. Remove current element" << endl;
        cout << "           0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to add: ";
            cin >> value;
            myList.add(value);
            break;

        case 2:
            cout << "Enter the value to add: ";
            cin >> value;
            cout << "Enter the index: ";
            cin >> index;
            myList.add_at(value, index);
            break;

        case 3:
            cout << "Enter the index: ";
            cin >> index;
            cout << "Enter the new value: ";
            cin >> value;
            myList.update(index, value);
            break;

        case 4:
            cout << "Enter the index to remove: ";
            cin >> index;
            myList.remove_at(index);
            break;

        case 5:
            cout << "List size: " << myList.ListSize() << endl;
            break;

        case 6:
            cout << "List elements: ";
            myList.printList();
            break;

        case 7:
            myList.start();
            break;

        case 8:
            myList.end();
            break;

        case 9:
            myList.next();
            break;

        case 10:
            myList.back();
            break;

        case 11:
            cout << "Current element: " << myList.getcurrent() << endl;
            break;

        case 12:
            myList.remove();
            break;

        case 0:
            cout << "Exiting the program." << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
