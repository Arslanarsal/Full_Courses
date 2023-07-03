#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void getData()
    {
        cout << "Enter the id number: ";
        cin >> id;
        cout << "Enter the price: ";
        cin >> price;
    }
    void displayData()
    {
        cout << "The id is: " << id<<endl;
        cout << "The price is: " << price<<endl;
    }
};

int main()
{
    int size = 3;
    shop *ptr = new shop[size];
    shop *temptr = ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the data of Item no: "<<i+1<<endl;
        ptr->getData(); // (ptr+i)->getData();  Both are correct
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<"The data of Item no: "<<i+1<<endl;
        temptr->displayData(); // (ptr+i)->displayData();  Both are correct
        temptr++;
    }



    return 0;
}