// #include <iostream>
// // #include <bits/stdc++.h>
// // #include <algorithm>
// using namespace std;
// int main()
// {
//     int n; // mx = -9999;
//     cout << "enter siza: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int max = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             cout << arr[i] << endl;
//             max = arr[i];
//         }
//         else
//         {
//             cout << max << endl;
//         }
//     }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     mx = max(mx, arr[i]);
//     //     cout << mx << endl;
//     // }

//     return 0;
// }
#include <stdio.h>
#include<cstdlib>
#include <cmath>
void update(int *a,int *b) {

int c = *a;
*a = *a + *b;
*b= abs(c - *b);
}

int main() { int a, b; int *pa = &a, *pb = &b;

scanf("%d %d", &a, &b);
update(pa, pb);
printf("%d\n%d", a, b);

return 0;
}