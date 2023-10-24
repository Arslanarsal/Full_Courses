#include <iostream>
#include <stdlib.h>

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
    Node *currentNode;
    Node *headNode;

public:
    // Constructor
    List()
    {
        headNode = new Node();
        headNode->setNext(NULL);
        currentNode = NULL;
        size = 0;
    }

    // Find a node with a specific value
    Node *find(int num)
    {
        currentNode = headNode->getNext();
        while (currentNode != NULL && currentNode->get() != num)
        {
            currentNode = currentNode->getNext();
        }
        if (currentNode == NULL)
        {
            return NULL;
        }
        return currentNode;
    }

    // Add an element to the end of the list
    void add(int addObject)
    {
        Node *newNode = new Node();
        newNode->set(addObject);
        while (currentNode != NULL && currentNode->getNext() != NULL)
        {
            currentNode->setNext(currentNode->getNext());
        }
        if (currentNode != NULL)
        {
            newNode->setNext(currentNode->getNext());
            currentNode->setNext(newNode);
            currentNode = newNode;
        }
        else
        {
            newNode->setNext(NULL);
            headNode->setNext(newNode);
            currentNode = newNode;
        }
        size++;
    }

    // Add an element to the front of the list
    void add_front(int addObject)
    {
        Node *newNode = new Node();
        newNode->set(addObject);
        if (headNode->getNext() == NULL)
        {
            newNode->setNext(NULL);
            headNode->setNext(newNode);
        }
        else
        {
            newNode->setNext(headNode->getNext());
            headNode->setNext(newNode);
        }
        currentNode = newNode;
        size++;
    }

    // Add an element after a specific value
    void add_at(int addObject, int num)
    {
        Node *temp = find(num);
        if (!temp)
        {
            cout << "Invalid Number" << endl;
            return;
        }

        Node *newNode = new Node();
        newNode->set(addObject);
        newNode->setNext(temp->getNext());
        temp->setNext(newNode);
        size++;
    }

    // Remove the element currently pointed to
    void remove_()
    {
        if (currentNode == NULL)
        {
            cout << "No element in List" << endl;
            return;
        }
        Node *temp = headNode;
        while (temp->getNext() != currentNode)
        {
            temp = temp->getNext();
        }
        Node *del = temp->getNext();
        temp->setNext(del->getNext());
        delete del;
        size--;
    }

    // Remove an element with a specific value
    void remove_num(int num)
    {
        Node *del = find(num);
        if (!del)
        {
            cout << "Invalid Number" << endl;
            return;
        }
        Node *temp = headNode;
        while (temp->getNext() != del)
        {
            temp = temp->getNext();
        }
        temp->setNext(del->getNext());
        delete del;
        size--;
    }

    // Move to the next element
    void next()
    {
        if (currentNode == nullptr || currentNode->getNext() == NULL)
            return;
        currentNode = currentNode->getNext();
    }

    // Get the current element's value
    int getcurrent()
    {
        if (currentNode == NULL)
        {
            cout << "NULL" << endl;
            return -1;
        }
        return currentNode->get();
    }

    // Get the size of the list
    int listsize()
    {
        return size;
    }

    // Print the entire list
    void printList()
    {
        Node *temp = headNode->getNext();
        while (temp != nullptr)
        {
            cout << temp->get() << " -> ";
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

    // myList.add_at(6, 4);
    // myList.add_front(6);
    // myList.next();
    // cout <<"Current Pointer at "<< myList.getcurrent() << endl;
    // myList.remove_();
    // myList.remove_num(5);
    // Node *temp = myList.find(6);
    // if (!temp)
    // {
    //     cout << "Element not in the List" << endl;
    // }
    // else
    // {
    //     cout << "Element in the List" << endl;
    // }

    cout << "List size: " << myList.listsize() << endl;
    myList.printList();

    return 0;
}
