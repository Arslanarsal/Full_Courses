#include<iostream>
#include<fstream>
using namespace std;

/*
useful classes working with files in c++
1. fstreambase
2. ofstream -->Derived from fstreambase
3. ifstream -->Derived from fstreambase
*/


/*
Primary two way to open a file in c++
1. Using construct
2. Using the member function open() of a class
*/
int main(){
    string st1 = "Arslan arsal";
    string st2;

    // Oping file using construct and write it
    ofstream write("writingFile.txt");//Write operator
    write<<st1;

    // Oping file using construct and reading it
    ifstream read("ReadingFile.txt");//Reading operator
    // read>>st2;
    getline(read , st2);
    cout<<st2;
    return 0;
}