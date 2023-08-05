#include <bits/stdc++.h>
using namespace std;

// bool is_possible(int x)
// {
//     return x >= 0;
// }
int main()
{
    //-->lambda function
    // cout << [](int x)
    // { return x + 5; }(7);

    // auto x = [](int x)
    // { return x + 6; };
    // cout << x(2);

    // vector<int> v = {-1, -2, -3};
    vector<int> v = {1, 2, 3};

    // // -->all_of function //--> if all true then return true //--> same like AND gate (if all true) return true
    cout << all_of(v.begin(), v.end(), [](int x)
                   { return x >= 0; });
    // cout << all_of(v.begin(), v.end(), is_possible);// Both are same function

    //-->any_of function //--> if anyone true then return true //--> same like OR gate (if one or all true) return true
    // cout << any_of(v.begin(), v.end(), [](int x)
    //                { return x >= 0; });
    // cout << any_of(v.begin(), v.end(), is_possible);// Both are same function

    //-->none_of function //--> if all false then return true //--> same like NOT gate (if all false) return true
    // cout << none_of(v.begin(), v.end(), [](int x)
    //                 { return x >= 0; });
    // cout << any_of(v.begin(), v.end(), is_possible);// Both are same function
    return 0;
}
