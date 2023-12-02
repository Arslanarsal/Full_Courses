// #include <bits/stdc++.h>
// using namespace std;

// // bool is_possible(int x)
// // {
// //     return x >= 0;
// // }
// int main()
// {
//     //-->lambda function
//     // cout << [](int x)
//     // { return x + 5; }(7);

//     // auto x = [](int x)
//     // { return x + 6; };
//     // cout << x(2);

//     // vector<int> v = {-1, -2, -3};
//     vector<int> v = {1, 2, 3};

//     // // -->all_of function //--> if all true then return true //--> same like AND gate (if all true) return true
//     cout << all_of(v.begin(), v.end(), [](int x)
//                    { return x >= 0; });
//     // cout << all_of(v.begin(), v.end(), is_possible);// Both are same function

//     //-->any_of function //--> if anyone true then return true //--> same like OR gate (if one or all true) return true
//     // cout << any_of(v.begin(), v.end(), [](int x)
//     //                { return x >= 0; });
//     // cout << any_of(v.begin(), v.end(), is_possible);// Both are same function

//     //-->none_of function //--> if all false then return true //--> same like NOT gate (if all false) return true
//     // cout << none_of(v.begin(), v.end(), [](int x)
//     //                 { return x >= 0; });
//     // cout << any_of(v.begin(), v.end(), is_possible);// Both are same function
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Using lambda functions for predicate checks in algorithms
    
    vector<int> v = {1, 2, 3};

    // all_of function checks if all elements satisfy a condition
    // Returns true if all elements satisfy the condition, else false
    cout << all_of(v.begin(), v.end(), [](int x) { return x >= 0; });

    // any_of function checks if any element satisfies a condition
    // Returns true if at least one element satisfies the condition, else false
    // cout << any_of(v.begin(), v.end(), [](int x) { return x >= 0; });

    // none_of function checks if none of the elements satisfy a condition
    // Returns true if none of the elements satisfy the condition, else false
    // cout << none_of(v.begin(), v.end(), [](int x) { return x >= 0; });

    return 0;
}

