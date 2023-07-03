#include <iostream>
using namespace std;

//     --> 1st class

class students
{
protected:
    int roll_number;

public:
    int p;
    void set_data(int);
    void get_data(void);
};
void students ::set_data(int r)
{
    p = 5786;
    roll_number = r;
}
void students ::get_data(void)
{
    cout << "The roll number is: " << roll_number << " " << p << endl;
}

// --> 2st class

class exam
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

class result : public exam, protected students
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
    cout << "Your percentage is " << percentage << " " << p << endl;
};

int main()
{
    result umer;
    // umer.p; --> if student class inherite protectedly in class result we can't access p.

    return 0;
}