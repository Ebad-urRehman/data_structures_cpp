//select one element compare to all elements
//Selection sort using for loop
#include <iostream>
using namespace std;
void sort_array(int n,int arr[])
{
    int temp;
    for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]>arr[j])
                {
                    temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
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