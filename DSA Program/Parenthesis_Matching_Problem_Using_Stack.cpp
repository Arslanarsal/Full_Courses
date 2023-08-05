#include <iostream>
using namespace std;
class node
{
public:
    char ch;
    node *next;
};
void push(node *&top, char che)
{
    node *newptr = new node();
    newptr->ch = che;
    if (top == NULL)
    {
        top = newptr;
    }
    else
    {
        newptr->next = top;
        top = newptr;
    }
}

void pop(node *&top, char che)
{
    if (top == NULL)
    {
        cout << "Parethesis is not correct " << endl;
        exit(0);
    }
    else
    {
        if (che == 41 && top->ch == 40)
        {
            node *delptr = top;
            top = top->next;
            delete delptr;
        }
        else if (che == 93 && top->ch == 91)
        {
            node *delptr = top;
            top = top->next;
            delete delptr;
        }
        else if (che == 125 && top->ch == 123)
        {
            node *delptr = top;
            top = top->next;
            delete delptr;
        }
        else
        {
            cout << "Parethesis is not correct " << endl;
            exit(0);
        }
    }
}
int main()
{
    node *head = NULL;
    string s;
    cout << "Enter character: ";
    cin >> s;
    for (int i = 0; i < sizeof(s); i++)
    {
        if (s[i] == 40 || s[i] == 91 || s[i] == 123)
        {
            push(head, s[i]);
        }
        else if (s[i] == 41 || s[i] == 93 || s[i] == 125)
        {
            pop(head, s[i]);
        }
    }
    if (head != NULL)
    {
        cout << "Parethesis is not correcttt " << endl;
    }
    else
    {
        cout << "Parethesis is correcttt " << endl;
    }

    return 0;
}