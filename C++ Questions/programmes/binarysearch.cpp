#include <iostream>
using namespace std;
int binar(int arr[] , int n , int key){
    int start = 0;
    int end = n;
    while (start<=end)
    {
        int mid = (start+end)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else 
        {
            start = mid + 1;
        }
    }
    return -1;
    
}
int main()
{
    int nn[] = { 1,2,3,4,5,6,7,8,9};
    int n;
    cout<<"enter key: ";
    cin>>n;
    cout<<binar(nn , 9 , n);

    return 0;
}
