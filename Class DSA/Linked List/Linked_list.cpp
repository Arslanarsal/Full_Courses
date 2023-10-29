#include <bits/stdc++.h>
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

    // Add an element after the current pointer in the list
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

    // Add an element to the front of the list
    void add_front(int addObject)
    {
        Node *newNode = new Node();
        newNode->set(addObject);
        newNode->setNext(headNode->getNext());
        headNode->setNext(newNode);
        lastcurNode = headNode;
        currentNode = newNode;
        size++;
    }

    // Update the value of the current node
    void update(int num, int add)
    {
        if (!(find(num)))
        {
            cout << "Invalid Number" << endl;
            return;
        }
        currentNode->set(add);
    }

    // Add an element after a specific value in the list
    void add_at(int addObject, int num)
    {
        if (!(find(num)))
        {
            cout << "Invalid Number" << endl;
            return;
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

    // Remove an element with a specific value
    void remove_num(int num)
    {
        if (!(find(num)))
        {
            cout << "This Number is Not in the List" << endl;
            return;
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
    List myList;

    int choice;
    int num, addObject;

    do
    {
        cout << "Linked List Menu:" << endl;
        cout << "           1. Add an element" << endl;
        cout << "           2. Update an element" << endl;
        cout << "           3. Remove an element" << endl;
        cout << "           4. Move to the next element" << endl;
        cout << "           5. Move to the previous element" << endl;
        cout << "           6. Move to the start of the list" << endl;
        cout << "           7. Move to the end of the list" << endl;
        cout << "           8. Add an element to the front" << endl;
        cout << "           9. Print the list" << endl;
        cout << "           10. Get the current element" << endl;
        cout << "           11. Get the size of the list" << endl;
        cout << "           12. Remove the current element" << endl;
        cout << "           13. Exit" << endl;

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
            cout << "Enter the element to add to the front: ";
            cin >> addObject;
            myList.add_front(addObject); // Add to the front
            break;
        case 9:
            myList.printList();
            break;
        case 10:
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
