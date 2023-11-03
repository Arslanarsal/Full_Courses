#include <iostream>
using namespace std;

// Define a class for a node in the linked list
class Node
{
    int object;
    Node *nextNode;

public:
    int get() { return object; };
    void set(int object) { this->object = object; };

    Node *getNext() { return nextNode; };
    void setNext(Node *nextNode)
    {
        this->nextNode = nextNode;
    }
};

// Define a class for a singly linked list
class List
{
    int size;
    Node *headNode;
    Node *currentNode;
    Node *lastcurNode;

public:
    // Constructor for the list
    List()
    {
        headNode = new Node();
        headNode->setNext(NULL);
        currentNode = NULL;
        lastcurNode = NULL;
        size = 0;
    }

    // Find a node with a specific value
    Node *find(int num)
    {
        if (currentNode == headNode)
        {
            return NULL;
        }
        lastcurNode = headNode;
        currentNode = headNode->getNext();
        while (currentNode->getNext() && currentNode->get() != num)
        {
            lastcurNode = currentNode;
            currentNode = currentNode->getNext();
        }
        if (currentNode->get() != num)
        {
            return NULL;
        }
        return currentNode;
    }

    // Move the current pointer to the start of the list
    void start()
    {
        if (headNode->getNext())
        {
            currentNode = headNode->getNext();
        }
        lastcurNode = headNode;
    }

    // Move the current pointer to the end of the list
    void tail()
    {
        while (currentNode->getNext() != NULL)
        {
            lastcurNode = currentNode;
            currentNode = currentNode->getNext();
        }
    }

    // Add an element in the list
    void add(int addObject)
    {
        Node *newNode = new Node();
        newNode->set(addObject);
        if (currentNode == NULL)
        {
            newNode->setNext(headNode->getNext());
            headNode->setNext(newNode);
        }
        else
        {
            newNode->setNext(currentNode->getNext());
            currentNode->setNext(newNode);
            lastcurNode = currentNode;
        }
        currentNode = newNode;
        size++;
    }

    // Update an element at a specific index
    void update(int idx, int add)
    {
        if (idx > size)
        {
            cout << "Invalid Number" << endl;
            return;
        }
        currentNode = headNode->getNext();
        lastcurNode = headNode;
        while (--idx)
        {
            lastcurNode = currentNode;
            currentNode = currentNode->getNext();
        }
        currentNode->set(add);
    }

    // Add an element at a specific index
    void add_at(int addObject, int idx)
    {
        if (idx > size + 1)
        {
            cout << "Invalid Number" << endl;
            return;
        }
        currentNode = headNode;
        lastcurNode = headNode;
        while (--idx)
        {
            lastcurNode = currentNode;
            currentNode = currentNode->getNext();
        }
        add(addObject);
    }

    // Remove the element currently pointed to
    void remove_()
    {
        if (currentNode == NULL)
        {
            cout << "No element in List" << endl;
            return;
        }
        Node *del = currentNode;
        lastcurNode->setNext(currentNode->getNext());
        delete (del);
        if (lastcurNode->getNext())
        {
            currentNode = lastcurNode->getNext();
            size--;
            return;
        }
        currentNode = lastcurNode;
        if (currentNode != headNode)
        {
            lastcurNode = headNode;
            while (lastcurNode->getNext() != currentNode)
            {
                lastcurNode = lastcurNode->getNext();
            }
        }
        size--;
    }

    // Remove an element at a specific index
    void remove_at(int idx)
    {
        if (idx > size)
        {
            cout << "Invalid Number" << endl;
            return;
        }
        currentNode = headNode->getNext();
        lastcurNode = headNode;
        while (--idx)
        {
            lastcurNode = currentNode;
            currentNode = currentNode->getNext();
        }
        remove_();
    }

    // Move to the next element
    void next()
    {
        if (currentNode == nullptr || currentNode->getNext() == NULL)
            return;
        lastcurNode = currentNode;
        currentNode = currentNode->getNext();
    }

    // Move to the previous element
    void back()
    {
        if (lastcurNode == headNode)
            return;
        currentNode = lastcurNode;
        lastcurNode = headNode;
        while (lastcurNode->getNext() != currentNode)
        {
            lastcurNode = lastcurNode->getNext();
        }
    }

    // Get the value of the current element
    void getcurrent()
    {
        if (currentNode == NULL)
        {
            cout << "NULL" << endl;
            return;
        }
        cout << currentNode->get() << endl;
    }

    // Get the size of the list
    int Listsize()
    {
        return size;
    }

    // Print the entire list
    void printList()
    {
        Node *temp = headNode->getNext();
        while (temp != nullptr)
        {
            cout << temp->get() << "->";
            temp = temp->getNext();
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List myList; // Create an instance of the List class

    int choice;
    int value, index;

    do
    {
        // Display the menu
        cout << "\nLinked List Menu:" << endl;
        cout << "1. Add an element in the list" << endl;
        cout << "2. Add an element at a specific index" << endl;
        cout << "3. Update an element at a specific index" << endl;
        cout << "4. Remove the current element" << endl;
        cout << "5. Remove an element at a specific index" << endl;
        cout << "6. Move to the next element" << endl;
        cout << "7. Move to the previous element" << endl;
        cout << "8. Get the value of the current element" << endl;
        cout << "9. Get the size of the list" << endl;
        cout << "10. Print the list" << endl;
        cout << "0. Exit" << endl;
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
            myList.remove_();
            break;

        case 5:
            cout << "Enter the index to remove: ";
            cin >> index;
            myList.remove_at(index);
            break;

        case 6:
            myList.next();
            break;

        case 7:
            myList.back();
            break;

        case 8:
            myList.getcurrent();
            break;

        case 9:
            cout << "List size: " << myList.Listsize() << endl;
            break;

        case 10:
            myList.printList();
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
