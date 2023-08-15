#include <iostream>
using namespace std;

int get_arr_size()
{
    int size;
    cin>>size;
    return size;
}

void get_arr(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
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
void get_old_el(int arr[], int n, int &old_el)
{
    int test = 0;
    while(true)
    {
        cout<<"Which element you want to update : ";
        cin>>old_el;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==old_el)
            {
                test=old_el;
                break;
            }
        }
    if(old_el==test)
    {break;}
    else
    {cout<<"Element not found :( Try Again \n";}
    }
}
void update_el(int arr[], int n, int old_el, int new_el)
{
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==old_el)
            {
                arr[i]=new_el;
                
            }
        }
}

int main()
{
    cout<<"how many elements you want to enter in array : ";
    int n = get_arr_size();
    int arr[n];
    int old_el;
    int new_el;
    cout<<"Enter an array : \n";
    get_arr(arr,n);
    get_old_el(arr, n, old_el);
    cout<<"Enter an element to update "<<old_el<<" with : ";
    cin>>new_el;
    cout<<"Updating element "<<old_el<<" with "<<new_el<<" .....\n";
    update_el(arr, n, old_el, new_el);
    cout<<"Your array is now : \n";
    display_arr(arr, n);

}