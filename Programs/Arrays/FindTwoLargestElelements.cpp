#include<iostream>
#include<climits>
using namespace std;

void largest(int arr[],int n)
{
    int first=INT_MIN;
    int second=INT_MIN;
    int curr=0;

    for(int i=0;i<n;i++)
    {
        curr=arr[i];
        if(first<curr)
        {
            second=first;
            first=curr;
        }
        else if(second<curr)
        {
            second=curr;
        }
    }
    cout<<"1Largest: "<<first<<" Second Largest :"<<second<<endl;
    }
    int main()
    {
        int arr[5]={10,30,50,40,60};
        largest(arr,5);
    }
