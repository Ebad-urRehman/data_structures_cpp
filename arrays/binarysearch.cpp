//binary search alogithm
#include <iostream>
using namespace std;
void binary_search(int n, int arr[],int x)
{
    int mid = 0;
    int i = 1;
    while(mid!=x)
    {
        mid=(i+n)/2;
        if(x>mid)
        {
            i=mid;
            n=n;
            cout<<"try\n";
        }
        else if(x<mid)
        {
            i=i;
            n=mid;
            cout<<"try\n";
        }
        else if(mid==x)
        {
            cout<<"your element is in the array";
            
        }
    }
}
int main()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int n=9;
    int x=10;
    binary_search(n,arr,x);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<",";
    }
}