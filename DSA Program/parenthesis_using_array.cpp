#include <iostream>
#include <string>
using namespace std;

class stack
{
public:
    int size;
    int top;
    char *arr;
};

void push(stack *ptr, char val)
{
    if (ptr->top == ptr->size - 1)
    {
        cout << "Stack is overflow" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
char pop(stack *ptr)
{
    if (ptr->top == -1)
    {
        cout << "Stack is Underflow";
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

char stacktop(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 'A';
    }

    return ptr->arr[ptr->top];
}

char stacklow(stack *ptr)
{
    if (ptr->top == -1)
    {
        return -1;
    }

    return ptr->arr[0];
}
bool isoperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return true;
    }
    return false;
}
int predence(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else if (ch == '*' || ch == '/')
    {
        return 3;
    }
    return 0;
}

char *infix_to_postfix(char *infix)
{
    stack *sp = new stack();
    sp->size = 10;
    sp->top = -1;
    sp->arr = new char[sp->size];
    char *postfix = new char[sizeof(infix)];
    int i = 0, j = 0;
    while (infix[i] != '\0')
    {
        if (!isoperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (predence(infix[i]) > predence(stacktop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (sp->top != -1)
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    // char *ch = "a+b-b+x";
    // cout << infix_to_postfix(ch);
    // int arr[] = {1,2,3,4,5};
    // cout<<sizeof(arr)/ sizeof(arr[0]);
    // deque<int>q;



    return 0;
}