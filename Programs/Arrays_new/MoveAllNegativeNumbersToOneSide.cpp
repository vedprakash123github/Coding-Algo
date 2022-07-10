#include<iostream>
#include<vector>
using namespace std;

void swap(int& x,int& y)
{
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    vector<int> arr{12,6,-7,-4};
    int n=arr.size();
    int j = 0;
    for (int i = 0; i < n; i++)
     {
        if (arr[i] < 0) 
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
