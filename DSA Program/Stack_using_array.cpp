#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int *arr;
};
void push(stack *ptr, int val)
{
    if (ptr->top == ptr->size - 1)
    {
        cout << "Stack is overflow";
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(stack *ptr)
{
    if (ptr->top == -1)
    {
        cout << "Stack is Underflow";
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peak(stack *ptr, int i)
{
    if (ptr->top - i + 1 < 0)
    {
        cout << "Invalid input ";
    }
    else
    {
        return ptr->arr[ptr->top + 1 - i];
    }
}

int main()
{
    stack *ptr = new stack();
    ptr->size = 3;
    ptr->top = -1;
    ptr->arr = new int[ptr->size];
    push(ptr, 11);
    push(ptr, 21);
    push(ptr, 31);
    push(ptr , 3);
    cout << pop(ptr) << endl;
    cout<<pop(ptr)<<endl;
    cout<<pop(ptr)<<endl;

    cout << peak(ptr, 1) << endl;


    return 0;
}