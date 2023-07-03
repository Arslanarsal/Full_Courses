#include<iostream>
#include<fstream>
using namespace std;

/*
Writing an dreading in a same file
*/
int main(){
    string name , st , st3;
    cout<<"Enetr your name: ";
    getline(cin,name);

    ofstream hout("writingFile.txt");
    hout<<name;
    hout.close();
// if we close a file we can't write in file 
    string st2 = "hello ";
    hout<<st2;

    ifstream hin("writingFile.txt");
    getline(hin,st);
    cout<<st;
    // hin.close();
    // if we close a file we can't read in file
    getline(hin,st3);
    cout<<st3;
    return 0;
}