//Insert sort
#include <iostream>
using namespace std;
void insertion_sort(int arr[], int n)
{
    int key,j;
    for (j = 0; j < n; j++)
    {
        key = arr[j];
        int i =j-1;
        while(i>=0 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
        
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

int get_arr_size()
{
    int size;
    cin>>size;
    return size;
}

int main()
{
    cout<<"Enter Size of Array : ";
    int n = get_arr_size();
    int arr[n];
    get_arr(arr, n);
    cout<<"Your array before sorting is : ";
    display_arr(arr, n);
    cout<<"\nSorting array......";
    insertion_sort(arr, n);
    cout<<"Your array after sorting is : ";
    display_arr(arr, n);
    return 0;
}