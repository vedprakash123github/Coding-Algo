#include<iostream>
using namespace std;

void swap(int& a, int& b)
{
    int temp=a;
    a=b;
    b=temp;
}

void Revarray(int i,int arr[], int n)
{
    if(i>=n/2) return;

    swap(arr[i],arr[n-i-1]);
    Revarray(i+1,arr,n);
}

int main()
{
    int arr[]={1,2,3,4,5};
    Revarray(0,arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
}