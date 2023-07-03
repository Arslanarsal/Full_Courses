#include<iostream>
using namespace std;
int getbit(int n ,int post){
    int a = (n & (1<<post))!=0;
    return a;
}
int clearbit(int n , int pos){
    int a = ~(1<<pos);
    int b = a & n;
    return b;
}
int updatabit(int n , int pos, int value){
    int a = ~(1<<pos);
    int b = n & a;
    int x = b | value<<pos;
    return x;

}
int main(){
    // int b = getbit(5 , 2);
    // cout<<b;
    // cout<<clearbit(5, 2);
    cout<<updatabit(5,1,1);
    
   




    return 0;
}