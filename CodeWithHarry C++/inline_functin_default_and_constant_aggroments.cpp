#include <iostream>
using namespace std;
// --> inline and static
inline int mul(int x, int y) // inline function improve the speed of function.
{
    static int c; //-->this line only execuite only one time even we call function
                  //   multipal time.
    c = c + 1;    //-->but this line execuite every time when function call
    return x * y + c;
}

void vipmoney(int currentmney, float increas = 0.10) //-->if we not send second peremeter they use automatically
                                                     // predefind value (0.10) . when we send value they use our sending value not predefind value
{
    cout << currentmney * increas;
}

void cont(const int &b)
{
    // b = 8756  --> give me error
}

int main()
{
    int a, b;
    cout << "enter two number :";
    cin >> a >> b;
    cout << mul(a, b) << endl;
    cout << mul(a, b) << endl;
    cout << mul(a, b) << endl;
    cout << mul(a, b) << endl;
    cout << mul(a, b) << endl;
    cout << mul(a, b) << endl;

    int money;
    cout << "enter money ";
    cin >> money;
    vipmoney(money);

    // cont(676);

    return 0;
}