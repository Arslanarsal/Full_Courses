#include <iostream>
using namespace std;

class myArray
{
    int Total_size;
    int used_size;
    int *ptr;

public:
    myArray(int, int);
    // myArray() {}
    void setData();
    void showData();
};

myArray::myArray(int t, int u)
{
    Total_size = t;
    used_size = u;
    ptr = new int[t];
}
void myArray::setData()
{
    int n;
    for (int i = 0; i < used_size; i++)
    {
        cout << "Enter element no " << i + 1 << ": ";
        cin >> n;
        ptr[i] = n;
    }
}
void myArray::showData()
{
    for (int i = 0; i < used_size; i++)
    {
        cout << ptr[i] << endl;
        
    }
}
int main()
{
    myArray c1(20, 5);
    c1.setData();
    c1.showData();

    return 0;
    
}