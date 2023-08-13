#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
    int i = 0, j=0,k=0;
    while(i<n1 && j<n2)
        {
            if(arr1[i]<arr2[j])
            {
                arr3[k++] = arr1[i++];
            }
            else
            {
                arr3[k++] = arr2[j++];
            }
        } 
        while(i<n1)
        {
            arr3[k++] = arr1[i++];
        }
        while(j<n2)
        {
            arr3[k++] = arr2[j];
        }
}

int main()
{
    int arr1[] = {2,4,6,8,10};
    int arr2[] = {1,3,5,7,9};
    int n1=5;
    int n2=5;
    int n3 = n1 + n2;
    int arr3[n3];
    mergeArrays(arr1, arr2, n1, n2, arr3);
    for(int i=0; i<n3; i++)
    {
        cout<<arr3[i]<<",";
    }
}
