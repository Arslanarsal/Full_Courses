#include <iostream>
using namespace std;

int main()
{

    int a = 4;
    int *ptr1 = &a;
    // cout<<*ptr1<<endl;

    // --> Dynamaically allocated
    int *ptr2 = new int(40);
    // cout << *ptr2 << endl;

    // --> Using Array Dynamaically allocated
    // int *ptr3 = new int[3];
    // ptr3[0] = 10;
    // ptr3[1] = 20;
    // ptr3[3] = 30;
    // cout << ptr3[0] << endl;

    int *ptr4 = new int[3];
    ptr4[0] = 10;
    ptr4[1] = 20;
    ptr4[2] = 30;
    delete[] ptr4;
    cout << ptr4[0] << endl;
    cout << ptr4[1] << endl;
    cout << ptr4[2] << endl;

    return 0;
}