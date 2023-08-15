#include <iostream>
using namespace std;
const int SIZE = 10;
int main()
{
    int n;
    cout<<"how many element you want to Enter";
    cin>>n;
    int arr[SIZE];
    cout<<"Enter your elements";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }

    cout<<"Your elements are:";
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<",";
    }
    //updating element
    int value,position;
    cout<<"Enter position ";
    cin>>position;
    cout<<"Value to insert at that position";
    cin>>value;
    int capicity_in_mem = sizeof(arr);
    int capicity = capicity_in_mem / sizeof(arr[0]);
    cout<<capicity;
    if(n<=capicity)
    {
        for(int i=n; i>=position; i--)
        {
            //for first time i is position means index - 1
            arr[i] = arr[i-1];
        }
        arr[position-1] = value;
        n++;
    }
    
    cout<<"Your elements are now :";
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<",";
    }

}