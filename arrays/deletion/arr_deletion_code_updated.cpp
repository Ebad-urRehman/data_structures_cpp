#include <iostream>
using namespace std;
const int SIZE=10;
int main()
{
    int n;
    int arr[10];
    int del_element;
    int n1;

    cout<<"Enter total Numbers of elements you want to enter : ";
    cin>>n;
    n1=n;
    cout<<"Start Entering elements of the array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Your elements are : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<",";
    }
while(true)
{
    cout<<"Enter the element you want to delete : ";
    cin>>del_element;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==del_element)
        {
            for(int j=i; j<n; j++)
            {
                arr[j]=arr[j+1];
            }
            n--;
            break;
        }
    }
    if(n1==n)
    {
        cout<<"Element not in array"<<endl;
    }
    else if(n1>n)
    {
    break;
    }
}
    cout<<"Your elements are now : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<",";
    }
}