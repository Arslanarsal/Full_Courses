#include <iostream>
#include <list>
using namespace std;
template<class p>
void display(list<p> lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}

int main()
{
    list<int> lst, lst2;
    // list<float> lst2;
    lst.push_back(1);
    lst.push_back(12);
    lst.push_back(25);
    lst.push_back(4);
    lst.push_back(90);

    // lst.sort();
    // display(lst);
    // for (int i = 0; i < 5; i++)
    // {
    //     int in;
    //     cout << "Enter value: ";
    //     cin >> in;
    //     lst.push_back(in);
    // }
    // lst.push_front(46);
    // lst.pop_front();
    // lst.remove(5); // this remove 5 in list
    // display(lst);

    lst2.push_back(1);
    lst2.push_back(129);
    lst2.push_back(3);
    lst2.push_back(14);
    lst2.merge(lst);//merging lsit
    lst2.sort();//sorting a list
    lst2.reverse();//reversing a list
    display(lst2);
    return 0;
}