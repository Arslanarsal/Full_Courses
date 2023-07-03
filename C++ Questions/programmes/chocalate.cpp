#include<iostream>
using namespace std;
int main(){

     int rupees ;
    cout<<"enter rupees: ";
    cin>>rupees;
    int raper, price = 3, cholocate, addclo, rem;
    cholocate = rupees;
    raper = cholocate;
    while (raper >= price)
    {
        addclo = (raper / price);
        rem = raper % price;
        cholocate += addclo;
        raper = addclo + rem;
    }
    cout << cholocate;

    return 0;
}