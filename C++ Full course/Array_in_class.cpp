#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter() { counter = 0; };
    void itemsNum();
    void getitem();
    void displayitem();
};

void shop ::getitem()
{
    cout << "Enter the I'd of item no " << counter + 1 << ": ";
    cin >> itemId[counter];
    cout << "Enter the price of item no " << counter + 1 << ": ";
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayitem()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The I'd of item is " << itemId[i] << " and his price is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initcounter();
    int n;
    cout << "Enter the items numbers: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        dukan.getitem();
    }
    dukan.displayitem();

    return 0;
}