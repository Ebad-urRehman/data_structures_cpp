#include<iostream>
using namespace std;
int main()
{
int arr[10];
int n;
cout<<"how many elements you want to enter in array(max=10):";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<",";
}
//insert a new element x at position pos
int x,pos;
cout<<"enter new element you want to insert:";
cin>>x;
cout<<"enter the position to insert:";
cin>>pos;
int capacity=sizeof(arr)/sizeof(arr[0]);
//cout<<"capcity="<<capcity;
if(n<capacity && pos<capacity)
{
for(int i=n;i<=pos;i--)
{
    arr[i]=arr[i-1];
}
}
arr[pos-1]=x;
n++;
for(int i=0; i<n; i++)
{
    cout<<arr[i]<<",";
}
}