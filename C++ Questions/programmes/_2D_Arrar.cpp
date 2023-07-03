#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "enter row and colum: ";
    cin >> a >> b;
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int x ,  flage = false;
    cin>>x;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j]==x)
            {
                cout<<"indux "<<i<<" "<<j;
                flage = true;
            }
            
        }
        
    }
    
    if (flage)
    {
        cout<<"  element are found: ";
    }
    else 
        cout<<"element not in array ";
    return 0;
}