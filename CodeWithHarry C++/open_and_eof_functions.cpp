#include<iostream>
#include<fstream>
using namespace std;


int main(){
    string name , st , st3;
    cout<<"Enetr your name: ";
    getline(cin,name);

    ofstream hout;
    hout.open("writingFile.txt");
    hout<<name<<"\n Who are you";
    hout<<"\n this is my name";
    hout.close();

    // ifstream hin;
    // hin.open("writingFile.txt");
    // // getline(hin,st);
    // // cout<<st;

    // while (hin.eof()==0)
    // {
    //     getline(hin,st);
    //     cout<<st<<endl;
    // }
    
    return 0;
}