#include<iostream>
using namespace std;
int main(){
    int n, base_condition = 1 , last_value = 0 , rem;
    cout<<"Enter a binary number: ";
    cin>>n;

    while (n)
    {
        rem =  n % 10;
        last_value = base_condition * rem + last_value;
        n = n / 10;
        base_condition = base_condition * 2;
    }
    
    int decimal = last_value, a = last_value, count = 0;
    while (a)
    {
        a = a / 8;
        count++;
    }
    
    int arr[count] , i = 0;
    while (decimal)
    {
        rem = decimal % 8;
        decimal = decimal / 8;
        arr[i]= rem;
        i++;
    }
    for (int j = i-1; j >=0; j--)
    {
        cout<<arr[j];
    }
    
    









    return 0;
}