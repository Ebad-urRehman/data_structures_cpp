#include <iostream>
using namespace std;
const int CAPACITY = 50;
void mergeArrays(int arg_arr1[], int arg_arr2[], int n1_arg, int n2_arg, int arg_arr3[])
{
    int i = 0, j=0,k=0;
    while(i<n1_arg && j<n2_arg)
        {
            if(arg_arr1[i]<arg_arr2[j])
            {
                arg_arr3[k++] = arg_arr1[i++];
            }
            else
            {
                arg_arr3[k++] = arg_arr2[j++];
            }
        } 
        while(i<n1_arg)
        {
            arg_arr3[k++] = arg_arr1[i++];
        }
        while(j<n2_arg)
        {
            arg_arr3[k++] = arg_arr2[j];
        }
}

int get_arr_size()
{
    int size;
    cout<<"How many elements you want in array : ";
    cin>>size;
    return size;
}

void get_array(int arr[],int size)
{
    cout<<"Start entering elements in array : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}

void display_array(int arr[], int size)
{
    cout<<"The Elements in your array are: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr1[CAPACITY];
    int arr2[CAPACITY];
    cout<<"Enter two elements to merge : ";
    cout<<"Enter Size of array 1";
    int n1 = get_arr_size();
    cout<<n1;
    cout<<"Enter elements of array 1";
    get_array(arr1,n1);
    cout<<"Enter Size of array 2";
    int n2 = get_arr_size();
    cout<<n2;
    cout<<"Enter elements of array2";
    get_array(arr2,n2);
    int n3 = n1 + n2;
    int arr3[100];
    mergeArrays(arr1, arr2, n1, n2, arr3);
    // display_array(arr3, n3);
}
