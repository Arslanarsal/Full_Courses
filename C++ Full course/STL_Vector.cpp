#include <iostream>
#include <vector>
using namespace std;
template<class T>
void printarray(vector<T> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<< v.at(i)<<" ";
    }
    cout << endl;
}

int main()
{
    // --> Way to creat a vectors
    vector<int> v1;//0 element Integer vector
    vector<char> v2(4);//4 element character vector
    // v2.push_back('C');
    // printarray(v2);
    // vector<char> v3(v2); //4 element character vector from v2
    // printarray(v3);
    // vector<int> v4(5,8); // 5 element vector of 8;  --> (8 8 8 8 8) 
    // printarray(v4);

    // int element, size;
    // cout << "Enter the size of array: ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the element: ";
    //     cin >> element;
    //     v1.push_back(element);
    // }
    // v1.pop_back();//last element delete

    vector<int>::iterator it;//Iterator point the element in vector 
    v1.push_back(20);
    it = v1.begin();
    // v1.insert(it,90);// Here 'it' point first element and add 90 before 20 
    // v1.insert(it,2,90);//Here 90 add 2 time 
    v1.insert(it+1,90);// Here 'it' point Second element and add 90 after 20 
    
    printarray(v1);
    return 0;
}