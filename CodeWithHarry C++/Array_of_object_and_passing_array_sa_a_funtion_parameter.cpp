#include <iostream>
using namespace std;

class employee
{
    int salary;
    int id;

public:
    void getdata();
    void setdata();

    void setdatabysum(employee, employee);
};
// this function is get object as a paramaters and his type is class name
void employee::setdatabysum(employee o1, employee o2)

{
    id = o1.id + o2.id;
    salary = o1.salary + o2.salary;
}

void employee ::setdata()
{
    cout << "enter the id of empoyee: ";
    cin >> id;
    cout << "enter the salary of empoyee: ";
    cin >> salary;
}

void employee ::getdata()
{
    cout << "The id of employy is " << id << " and salary is " << salary << endl;
}

int main()
{

    employee people[2];
    for (int i = 0; i < 2; i++)
    {
        people[i].setdata();
        people[i].getdata();
    }

    people[2].setdatabysum(people[0], people[1]);
    people[2].getdata();

    return 0;
}