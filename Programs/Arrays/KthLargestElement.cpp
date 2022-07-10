#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>& p,int start, int mid, int end)
{
    int i=start,j=mid+1,k=0;
    vector<int> v;    // why vector is giving error(segmentation fault) when I am not declaring its here here but if i am using 
    while(i<=mid && j<=end) // vector<int> v(end-start+1) it doesn't gives me error
    {
        if(p[i]<=p[j])
        {
            v[k++]=p[i++];
        }
        else
        {
            v[k++]=p[j++];
        }
    }
    while(i<=mid)
    {
        v[k++]=p[i++];
    }
    while(j<=end)
    {
        v[k++]=p[j++];
    }
    for(int l=start;l<=end;l++)
    {
        p[l]=v[l-start];
    }
}

void mergesort(vector<int>& p, int start, int end)
{
    if(start<end)
    {
   int mid=(start+end)/2;
    mergesort(p,start,mid);
    mergesort(p,mid+1,end);
    merge(p,start,mid,end);
    }
}

int main()
{
    vector<int> v{2,54,23,1,56,34};
   // sort(v.begin(), v.end(), greater<int>());
   mergesort(v,0,5);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}