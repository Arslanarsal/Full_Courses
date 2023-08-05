#include <iostream>
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
        cout << "Stack is overflow"<<endl;
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
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

char peak(stack *ptr, int i)
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
    ptr->arr = new char[ptr->size];
    push(ptr, 'e');
    push(ptr, '1');
    push(ptr, '2');
    push(ptr , '3');
    // cout << pop(ptr) << endl;
    // cout<<pop(ptr)<<endl;
    // cout<<pop(ptr)<<endl;

    cout << peak(ptr, 1) << endl;


    return 0;
}