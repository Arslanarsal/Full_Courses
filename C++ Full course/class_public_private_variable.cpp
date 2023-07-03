#include <iostream>
using namespace std;

class students
{
    int a, b, c; // Here "a , b , c"are private variable
    // because in class variable are private without declaring

    // void setdata(int, int, int); --> we can't call function privately;
    // void printdata();  --> it's not work because we call function privatly;
public:
    int d, e; // --> here "d , e" are public variable
    // because we declar these variable are public
    // in line 11 after we call publice all variable
    //  are public whose read after call public ;
    void setdata(int, int, int);
    void printdata();
};

void students ::setdata(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}
void students ::printdata()
{
    cout << "the value of a is: " << a << endl;
    cout << "the value of b is: " << b << endl;
    cout << "the value of c is: " << c << endl;
}

int main()
{
    students arslan;
    // arslan.a = 87;  --> He give me error because 'a' is a private variable;
    arslan.e = 200;
    arslan.d = 100;
    arslan.setdata(12, 15, 16);
    arslan.printdata();

    return 0;
}