#include<iostream>
using namespace std;

int sum(int, int); // --> function proto type

int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<sum(a,b); //--> a and b are actual parameters.

    return 0;
}

int sum(int x, int y){  //--> we not use 'void' in 'int' name because 
    //   void function get a value but not return it that why.
    int c = x+y; // --> x and y are formal parameters.
    int b = x-y;
    //return c,b; // --> only return last value. here is b last value
    return c; return b;  //-->here only return c value not b.
}