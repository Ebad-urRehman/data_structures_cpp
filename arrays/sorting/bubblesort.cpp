//INsert sort
#include <iostream>
using namespace std;

void bubb_sort(int arr[],int n)
{
    for (int  i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
}

void display_arr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    } 
    cout<<endl; 
}
void get_arr(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int n;
    cout<<"how many el you want to enter : ";
    cin>>n;
    int arr[n];
    get_arr(arr, n);
    bubb_sort(arr, n);
    cout<<"array after sort : \n";
    display_arr(arr,n);
    return 0;
    
    
}