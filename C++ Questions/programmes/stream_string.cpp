#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string str = "sdkjfbjsdbfhbv";
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;
    string st = "HBSVJJFBVJH BV";
    transform(st.begin() , st.end() , st.begin(), :: tolower);
    cout<<st<<endl;
    string num = "789456879856";
    sort(num.begin() , num.end() , greater<char>());
    cout<<num;
}