#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int n = 7;
    int a[] = {4, 7, 3, 2, 58, 0, 15};
    print(a, n);

    //-->For sort
    sort(a, a + n);
    print(a, n);

    //--> Find maximum number in a array
    int max = *max_element(a, a + n); // return adress of max element
    cout << max << "\n";

    //--> Find minimum number in a array
    int min = *min_element(a, a + n);// return adress of min element
    cout << min << "\n";

    //--> Find sum of a array
    int sum = accumulate(a, a + n, 0); //--> return sum
    cout << sum << "\n";

    //--> Reverse array
    reverse(a, a + n); //-->reverse any thing like string , vector 
    print(a, n);

    //--> Find element in a array
    auto ele = find(a, a + n, 296);// return adress of finding element
    if (ele != &n)
    {
        cout << "Find " << *ele << "\n";
    }
    else
    {
        cout << "Not found\n";
    }

    return 0;
}
