#include <iostream>
using namespace std;
/*
we can only inherite public member of base class
we can't  inherite private member of base class
derived class invisibility defaulty private
*/

// base class
class employe
{
public:
    int id;
    int salary;
    // employe() {}
    // employe(int inpid)
    // {
    //     id = inpid;
    //     salary = 50;
    // }
    void getdata()
    {
        cout << "slary is " << salary << " id id " << id << endl;
    }
};
// derived class
class programmer :employe
{
public:
    programmer(int a)
    {
        id = a;
    }
    void getdata()
    {

        salary = 134;
        cout << salary << " id is " << id << endl;
      
    }
};

int main()
{
    // employe arsal(2), umer(3);
    // arsal.getdata();
    // umer.getdata();

    programmer hanzla(3);
    hanzla.getdata();

    return 0;
}