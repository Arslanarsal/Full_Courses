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
class queue
{
    int size;
    Node *front;
    Node *rara;

public:
    // Constructor for the list
    queue()
    {
        front = NULL;
        rara = NULL;
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

    // Add an element in the list
    void enqueue(int addObject)
    {
        Node *newNode = new Node();
        newNode->set(addObject);
        newNode->setNext(NULL);
        if (rara == NULL)
        {
            rara = newNode;
            front = newNode;
            return;
        }
        rara->setNext(newNode);
        rara = rara->getNext();
    }

    // Remove the element currently pointed to
    void dequeue()
    {
        if (isempty())
        {
            cout << "Queue is empty\n";
        }
        else if (front == rara)
        {
            rara = NULL;
            front = NULL;
        }
        else
        {
            front = front->getNext();
        }

        size--;
    }

    int peek()
    {
        if (isempty())
        {
            cout << "Queue is empty\n";
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
        Node *temp = front;
        while (temp != nullptr)
        {
            if (temp->get() == n)
            {
                return n;
            }
            temp = temp->getNext();

        }
        cout << "Element not in the queue\n";
        return -1;
    }

    void display()
    {
        Node *temp = front;
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
    queue qu;
    qu.enqueue(2);
    qu.enqueue(3);
    qu.enqueue(4);
    // cout<<qu.peek()<<endl;
    // qu.dequeue();
    cout<<qu.find(41)<<endl;
    // cout<<qu.peek()<<endl;


    qu.display();
}
