// #include <iostream>
// #include <string>
// using namespace std;
// bool isValid(string s)
// {
//     if (s.length() % 2 == 1 || s.length() > 6)
//     {
//         return false;
//     }
//     else if (s.length() == 2)
//     {
//         if (s[0] == 40 && s[1] == 41 || s[0] == 91 && s[1] == 93 || s[0] == 123 && s[1] == 125)
//         {
//             return true;
//         }
//         else
//             return false;
//     }

//     else if (s.length() == 4)
//     {
//         for (int i = 0; i < 4; i++)
//         {
//             if (s[i] == 40)
//             {
//                 int a = true;
//                 for (int j = i + 1; j < 4; j++)
//                 {
//                     if (s[j] == 41)
//                     {
//                         a = false;
//                         break;
//                     }
//                 }
//                 if (a)
//                 {
//                     return false;
//                 }
//             }
//             else if (s[i] == 91)
//             {
//                 int a = true;
//                 for (int j = i + 1; j < 4; j++)
//                 {
//                     if (s[j] == 93)
//                     {
//                         a = false;
//                         break;
//                     }
//                 }
//                 if (a)
//                 {
//                     return false;
//                 }
//             }
//             else if (s[i] == 123)
//             {
//                 int a = true;
//                 for (int j = i + 1; j < 4; j++)
//                 {
//                     if (s[j] == 125)
//                     {
//                         a = false;
//                         break;
//                     }
//                 }
//                 if (a)
//                 {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }

//     else if (s.length() == 6)
//     {
//         for (int i = 0; i < 6; i++)
//         {
//             if (s[i] == 40)
//             {
//                 int a = true;
//                 for (int j = i + 1; j < 6; j++)
//                 {
//                     if (s[j] == 41)
//                     {
//                         a = false;
//                         break;
//                     }
//                 }
//                 if (a)
//                 {
//                     return false;
//                 }
//             }
//             else if (s[i] == 91)
//             {
//                 int a = true;
//                 for (int j = i + 1; j < 6; j++)
//                 {
//                     if (s[j] == 93)
//                     {
//                         a = false;
//                         break;
//                     }
//                 }
//                 if (a)
//                 {
//                     return false;
//                 }
//             }
//             else if (s[i] == 123)
//             {
//                 int a = true;
//                 for (int j = i + 1; j < 6; j++)
//                 {
//                     if (s[j] == 125)
//                     {
//                         a = false;
//                         break;
//                     }
//                 }
//                 if (a)
//                 {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// }
// int main()
// {
//     string a = "[{()]";
//     cout << isValid(a);
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        if (s.length() % 2 == 1 || s.length() > 6)
        {
            return false;
        }
        else if (s.length() == 2)
        {
            if (s[0] == 40 && s[1] == 41 || s[0] == 91 && s[1] == 93 || s[0] == 123 && s[1] == 125)
            {
                return true;
            }
            else
                return false;
        }

        else if (s.length() == 4)
        {
            for (int i = 0; i < 4; i++)
            {
                if (s[i] == 40)
                {
                    int a = true;
                    for (int j = i + 1; j < 4; j++)
                    {
                        if (s[j] == 41)
                        {
                            a = false;
                            break;
                        }
                    }
                    if (a)
                    {
                        return false;
                    }
                }
                else if (s[i] == 91)
                {
                    int a = true;
                    for (int j = i + 1; j < 4; j++)
                    {
                        if (s[j] == 93)
                        {
                            a = false;
                            break;
                        }
                    }
                    if (a)
                    {
                        return false;
                    }
                }
                else if (s[i] == 123)
                {
                    int a = true;
                    for (int j = i + 1; j < 4; j++)
                    {
                        if (s[j] == 125)
                        {
                            a = false;
                            break;
                        }
                    }
                    if (a)
                    {
                        return false;
                    }
                }
            }
            return true;
        }

        else if (s.length() == 6)
        {
            for (int i = 0; i < 6; i++)
            {
                if (s[i] == 40)
                {
                    int a = true;
                    for (int j = i + 1; j < 6; j++)
                    {
                        if (s[j] == 41)
                        {
                            a = false;
                            break;
                        }
                    }
                    if (a)
                    {
                        return false;
                    }
                }
                else if (s[i] == 91)
                {
                    int a = true;
                    for (int j = i + 1; j < 6; j++)
                    {
                        if (s[j] == 93)
                        {
                            a = false;
                            break;
                        }
                    }
                    if (a)
                    {
                        return false;
                    }
                }
                else if (s[i] == 123)
                {
                    int a = true;
                    for (int j = i + 1; j < 6; j++)
                    {
                        if (s[j] == 125)
                        {
                            a = false;
                            break;
                        }
                    }
                    if (a)
                    {
                        return false;
                    }
                }
            }
            return true;
        }
    }
};

int main()
{
    Solution obj;
    string s = "[()]";
    cout<<obj.isValid(s);
}