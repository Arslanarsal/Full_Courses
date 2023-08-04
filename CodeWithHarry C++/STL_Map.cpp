#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> marksMap;
    marksMap["Arslan"] = 98;
    marksMap["Umer"] = 89;
    marksMap["Hanzla"] = 80;

    marksMap.insert({{"Ali" , 765},{"li" , 65}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    cout<<"The size of map is: "<<marksMap.size()<<endl;
    cout<<"The size of maxmap is: "<<marksMap.max_size()<<endl;
    cout<<"The Empty's map is: "<<marksMap.empty()<<endl;
    return 0;
}