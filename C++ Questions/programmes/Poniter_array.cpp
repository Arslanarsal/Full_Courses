#include <iostream>
using namespace std;
int main()
{

    int arr[4] = {11, 22, 33, 44};
    cout<<arr<<endl;
    cout<<&(arr[0])<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<*(arr+i)<<endl;
    }
    
    int *ptr;
    ptr = arr;  
    *ptr =  2345;
    for (int i = 0; i < 4; i++)
    {
        cout<<*(ptr)<<endl;
        ptr++;
    }
    
    return 0;
}