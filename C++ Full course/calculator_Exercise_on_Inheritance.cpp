#include <iostream>
#include <cmath>
using namespace std;

class simple_calculator
{
    float n1;
    float n2;
    float result;
    char simble;
    void calculate();
    void display();
public:
    void set_data();
    
};
void simple_calculator ::set_data()
{
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "Enter a simble between(+,-,*,/): ";
    cin >> simble;
    calculate();
}
void simple_calculator ::calculate()
{
    if (simble == '+')
    {
        result = n1 + n2;
    }
    else if (simble == '-')
    {
        result = n1 - n2;
    }
    else if (simble == '*')
    {
        result = n1 * n2;
    }
    else
    {
        result = n1 / n2;
    }
    display();
}
void simple_calculator ::display()
{
    cout << n1 << " " << simble << " " << n2 << " is " << result << endl;
}

// --> second class
class scientific_calculator
{
    float n1;
    float result;
    char simble;
    void calculate();
    void display();
public:
    void set_data();
    
};
void scientific_calculator ::set_data()
{
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter a simble between(s,c,t,s): ";
    cin >> simble;
    calculate();
}
void scientific_calculator ::calculate()
{
    if (simble == 's')
    {
        result = sin(n1);
    }
    else if (simble == 'c')
    {
        result = cos(n1);
    }
    else if (simble == 't')
    {
        result = tan(n1);
    }
    else
    {
        result = sinh(n1);
    }
    display();
}
void scientific_calculator ::display()
{
    cout << simble << " " << n1 << " is " << result << endl;
}

// --> 3rd class Hybrid class
class hybrid_calculator:public simple_calculator,public scientific_calculator
{
    public:
    
    void set_data(){
        simple_calculator::set_data();// this is Ambiguity
    }
};
int main()
{
    // simple_calculator c1;
    // c1.set_data();

    // scientific_calculator c2;
    // c2.set_data();

    hybrid_calculator c3;
    c3.set_data();
    return 0;
}