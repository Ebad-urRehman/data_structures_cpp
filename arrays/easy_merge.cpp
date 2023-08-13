#include <iostream>
using namespace std;
void merge_arr(int n1, int arr1[], int n2, int arr2[],int arr3[])
{
    int i,j;
    for(i=0; i<n1; i++)
    {
        arr3[i]=arr1[i];
    }
    for(j=0; j<n2; j++)
    {
        arr3[i+j]=arr2[j];
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
    merge_arr(n1, arr1, n2, arr2, arr3);
    for(int i=0; i<n3; i++)
    {
        cout<<arr3[i]<<",";
    }
}