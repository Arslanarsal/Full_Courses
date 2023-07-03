#include <iostream>
using namespace std;

//     --> 1st class

class students
{
protected:
    int roll_number;

public:
    void set_data(int);
    void get_data(void);
};
void students ::set_data(int r)
{
    roll_number = r;
}
void students ::get_data(void)
{
    cout << "The roll number is: " << roll_number << endl;
}

// --> 2st class

class exam : public students
{
protected:
    float math;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m1, float m2)
{
    math = m1;
    physics = m2;
}

void exam ::get_marks(void)
{
    cout << "Marks in math is " << math << " and physics marks is " << physics << endl;
}

//  --> 3rd class

class result : public exam
{
protected:
    float percentage;
    void per();

public:
    void display_result();
};
void result ::per()
{
    percentage = (math + physics) / 2;
}
void result::display_result(void)
{
    per();
    get_data();
    get_marks();
    cout << "Your percentage is " << percentage << endl;
};
/*
 if we inherite B from A and C from B.[A--->B--->C]
     1. A is the base class for B and B is the base class for C.
     2. A--->B--->C is called inhertance path.
*/
int main()
{
    result umer;
    umer.set_data(4);
    umer.set_marks(80, 80);
    umer.display_result();
    return 0;
}