#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int kSmall(vector<int> v,int k)
{
    sort(v.begin(),v.end());
    return v[k-1];

}

void sortArr(int arr[],int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void v(vector<int> vt)
{
    for(int i=0;i<5;i++)
    {
        cout<<vt[i]<<endl;
    }
}

int main()
{
    
    int k=4;
    
    int arr[]={7,4,10,20,15};
    vector<int> vt(7,1);
    v(vt);
   // cout<<kSmall(v,k);
   // sortArr(arr,5);
}