#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void chk_binary();
public:
    void input();
    // void chk_binary();
    void once_compliment();
    void display_binary();
};

void binary::chk_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "input invalide ";
            exit(0);
        }
    }
}
void binary :: input()
{
    cout << "enter a binary number: ";
    cin >> s;
}
void binary::once_compliment()
{
    chk_binary(); // if we call function in a function is called nesting of memeber function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
            s.at(i) = '0';
    }
}

void binary :: display_binary(){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
}
int main()
{
    binary b;
    b.input();
    // b.chk_binary();
    b.once_compliment();
    b.display_binary();

    return 0;
}