#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float interestRate;
    int returnValue;

public:
    bankdeposit(){};//this function invoked when bd1 make  and garbidge value are stores in bd1 objects
    
    bankdeposit(int, int, int);
    bankdeposit(int, int, float);
    void show();
};
void bankdeposit::show()
{
    cout << "Principal amount was " << principal << " and the interest Rate on "
         << years << " Years is " << returnValue << endl
         << endl;
}

bankdeposit::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = (float)r / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}
bankdeposit::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}
int main()
{
    bankdeposit bd1, bd2;
    bd1.show();
    bd2.show();
    int p, y, R;
    float r;

    cout << "Enter the amount , Year and interest rate: ";
    cin >> p >> y >> r;

    bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout << "Enter the amount , Year and interest rate R: ";
    cin >> p >> y >> R;

    bd2 = bankdeposit(p, y, R);
    bd2.show();
    return 0;
}