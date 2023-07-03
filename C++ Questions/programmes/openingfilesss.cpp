#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string st = "bkjg", str2;
    fstream filename;
    ofstream write("filename.txt", ios::out);
    write << st;
    // filename.close();
    ifstream in("filename.txt");
    in >> str2;
    cout << str2;
    filename.close();

    return 0;
}