#include <iostream>
using namespace std;



// --> second class
class complex
{
    int a, b;

public:
    void getdata(int, int);
    void displaydata();
};



void complex ::getdata(int x, int y=90 )
{
    a = x;
    b = y;
}

 

void complex ::displaydata()
{
    cout << "The value of a is " << a << " the value of b is " << b << "i" << endl;
}

int main()
{
    
    complex c1, c2;
    c1.getdata(3);
    c1.displaydata();

    c2.getdata(4, 2);
    c2.displaydata();

  
    return 0;
}