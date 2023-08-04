#include <iostream>
using namespace std;
class employee
{
    int Id;
    int salary;
    static int count; // static variable can be access by all object

public:
    void getdata();
    void displaydata();
    static void printCount(); // static methods can only access static variables and we can call them using class name
};

int employee ::count; // default value is 0

void employee ::printCount()
{
    cout << "the value of count is " << count;
}

void employee ::getdata()
{
    cout << "Enter the i'd of employ no " << count + 1 << ": ";
    cin >> Id;
    cout << "Enter the salary of employ no " << count + 1 << ": ";
    cin >> salary;
    count++;
}

void employee ::displaydata()
{

    cout << "\nthe id of emply no " << count << " is " << Id << " and the salary is " << salary << endl;
}

int main()
{
    employee arslan, umer, hanzla;
    arslan.getdata();
    arslan.displaydata();

    umer.getdata();
    umer.displaydata();

    hanzla.getdata();
    hanzla.displaydata();

    employee ::printCount();

    return 0;
}