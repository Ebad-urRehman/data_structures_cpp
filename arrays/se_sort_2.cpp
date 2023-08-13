#include <iostream>
using namespace std;
void sort_array(int n,int arr[])
{
    int min_indx;
    for(int i=0; i<n-1; i++)
        {
            min_indx = i;
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]<arr[min_indx])
                {
                    min_indx=j;
                }
            }
            if(min_indx!=i)
            {
                swap(arr[i],arr[min_indx]);
            }
        }
}

int main()
{
    int arr[10] = {1,2,34,12,67,231,56,23,9,21};
    int n=10;
    sort_array(n,arr);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<",";
    }
    }