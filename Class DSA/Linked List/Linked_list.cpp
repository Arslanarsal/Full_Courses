#include <bits/stdc++.h>

using namespace std;

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

class List
{
    int size;
    Node *headNode;
    Node *currentNode;
    Node *lastcurNode;

public:
    // Constructor
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

    void start()
    {
        if (headNode->getNext())
        {
            currentNode = headNode->getNext();
        }
        lastcurNode = headNode;
    }

    void tail()
    {
        while (currentNode->getNext() != NULL)
        {
            lastcurNode = currentNode;
            currentNode = currentNode->getNext();
        }
    }

    // Add an element to the next element of the current Pointer of the list
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
    // void add(int addObject)
    // {
    //     Node *newNode = new Node();
    //     newNode->set(addObject);
    //     newNode->setNext(currentNode->getNext());
    //     currentNode->setNext(newNode);
    //     lastcurNode = currentNode;
    //     currentNode = newNode;
    //     size++;
    // }

    void update(int num, int add)
    {
        if (!(find(num)))
        {
            cout << "Invalid Number" << endl;
            return;
        }
        currentNode->set(add);
    }

    // // Add an element to the front of the list
    // void add_front(int addObject)
    // {
    //     Node *newNode = new Node();
    //     newNode->set(addObject);
    //     newNode->setNext(headNode->getNext());
    //     headNode->setNext(newNode);
    //     lastcurNode = headNode;
    //     currentNode = newNode;
    //     size++;
    // }

    // Add an element after a specific value
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

    // Get the current element's value
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

    myList.add(1);
    myList.add(2);
    myList.add(3);
    myList.add(4);
    myList.add(5);
    myList.printList();

    return 0;
}
