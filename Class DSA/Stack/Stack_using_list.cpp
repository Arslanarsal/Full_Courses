#include <iostream>
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

// Define a class for a singly linked list
class stack
{
    int size;
    Node *headnode;
    Node *front;

public:
    
    stack()
    {
        front = NULL;
        headnode = NULL;
        size = 0;
    }

    int isempty()
    {
        if (front == NULL)
        {
            return 1;
        }
        return 0;
    }

    
    void push(int addObject)
    {
        Node *newNode = new Node();
        newNode->set(addObject);
        newNode->setNext(NULL);
        if (front == NULL)
        {
            headnode = newNode;
            front = newNode;
            return;
        }
        front->setNext(newNode);
        front = front->getNext();
    }


    void pop()
    {
        if (isempty())
        {
            cout << "Queue is empty\n";
        }
        else if (front == headnode)
        {
            headnode = NULL;
            front = NULL;
        }
        Node *del = front;
        front = headnode;
        while (front->getNext() != del)
        {
            front = front->getNext();
        }
        front->setNext(NULL);
        delete (del);
        size--;
    }

    int top()
    {
        if (isempty())
        {
            cout << "Stack is empty\n";
            return -1;
        }
        return front->get();
    }
    // Get the size of the list
    int Listsize()
    {
        return size;
    }

    int find(int n)
    {
        Node *temp = headnode;
        while (temp != nullptr)
        {
            if (temp->get() == n)
            {
                return n;
            }
            temp = temp->getNext();
        }
        cout << "Element not in the stack\n";
        return -1;
    }

    void display()
    {
        Node *temp = headnode;
        while (temp != nullptr)
        {
            cout << temp->get() << " ";
            temp = temp->getNext();
        }
        cout << endl;
    }
};

int main()
{
    stack qu;
    // cout<<qu.peek()<<endl;

    qu.display();
}
