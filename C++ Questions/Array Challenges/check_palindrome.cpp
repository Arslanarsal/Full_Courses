#include<iostream>
using namespace std;
int main(){

    char name[3];
    cout<<"Enter name: ";
    cin>>name;
    int count =0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    
    for (int i = 0; i < count+1; i++)
    {
        if (name[i] != name[count-1-i])
        {
            cout<<"not";
            break;
        }
    }
    




    return 0;
}