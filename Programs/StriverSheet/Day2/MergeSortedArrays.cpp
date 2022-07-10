#include<iostream>
using namespace std;

void merge(int arr1[],int m,int arr2[],int n)
{
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 && j>=0)
    {
        if(arr1[i]>arr2[j])
        {
            arr1[k--]=arr1[i--];
        }
        else
        {
            arr1[k--]=arr2[j--];
        }
    }
    while(j>=0)
    {
        arr1[k--]=arr2[j--];
    }
}
int main()
{
    int arr1[10]={2,4,11,12,13};
    int arr2[5]={1,5,8,14,17};
    merge(arr1,5,arr2,5);
    for(int i=0;i<10;i++)
    {
        cout<<arr1[i]<<endl;
    }
}