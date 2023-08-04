#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()//Construct function
    {
        count++;
        cout << "Construct call number: " << count << endl;
    }
    ~num()//Destruct function
    {
        cout << "Destruct call number: " << count << endl;
        count--;
    }
};
/*
Construct function invoked automatically when we creat object.
 
    -->Destruct will clear the memory of object 

Destruct function invoked automatically when complier relise
we don't need this object. complier invoked the Destruct automaticaly 
for this object.

like we creat two object n2 , n3 when the block of code is end the complier 
relise that objects passes out of scope we don't need these two object
then he invoked Destruct for this two objects.
*/


/*
Destructors are usually used to deallocate memory and do other cleanup
for a class object and its class members when the object is destroyed.

A destructor is called for a class object when that object
passes out of scope or is explicitly deleted.
*/
int main()
{
    cout << "Enetring the main\n";
    num n1;
    cout << "Enetring the block\n";
    {
        // cout << "\nEnetring the block\n";
        cout << "Creating two objects\n";
        num n2, n3;
        cout << "Exiting the block\n";
    }
    cout << "Back to main\n";

    return 0;
}