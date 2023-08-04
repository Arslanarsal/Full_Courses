#include <iostream>
using namespace std;

// -->1st class

class student
{
    int roll_number;

public:
    void set_roll_number(int a)
    {
        roll_number = a;
    }
    void print_roll_number()
    {
        cout << "The roll number is: " << roll_number << endl;
    }
};

// -->2st class

class sport : virtual public student
{
protected:
    float sp;

public:
    void set_sp(int a)
    {
        sp = a;
    }
    void print_sp()
    {
        cout << "The sports marks is: " << sp << endl;
    }
};

// -->3st class

class marks : virtual public student
{
protected:
    float math, physics;

public:
    void set_marks(int a, int b)
    {
        math = a;
        physics = b;
    }
    void print_marks()
    {
        cout << "Math marks is: " << math << "\nPhysics marks is: " << physics << endl;
        ;
    }
};

// -->4st class

class result : public sport, public marks
{
    float result;

public:
    void set_result()
    {
        result = math + physics + sp;
    }
    void display()
    {
        print_roll_number();
        print_marks();
        print_sp();
        cout << "The total marks is: " << result << endl;
    }
};
/*
1st class roll_number is inherite in class 2st and 3rd 
when we creat 4th class the roll_number is inherite from 2st and 3rd
this will give error because compiler does not know which roll_number i use

sloved:
    if we creat 2st and 3rd class virtual then in the 4th class the roll_number
    is used once and complier does not give error
    
*/

int main()
{
    result umer;
    umer.set_roll_number(4);
    umer.set_sp(9);
    umer.set_marks(80, 90);
    umer.set_result();
    umer.display();
    return 0;
}