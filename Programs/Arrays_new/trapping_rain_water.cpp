#include<iostream>
#include<vector>
using namespace std;

int rainWater(vector<int> v)
{
    int n=v.size();
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        int left=v[i];
        for(int j=0;j<i;j++)
        {
            left=max(left,v[j]);
        }
        int right=v[i];
        for(int j=i+1;j<n;j++)
        {
            right=max(right,v[j]);
        }
        res=res+(min(left,right)-v[i]);
    }
    return res;
}

//optimised approach
int rainWater2(vector<int> v)
{
    int n=v.size();
    vector<int> left(n);
    vector<int> right(n);
    left[0]=v[0];
    int res=0;

    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],v[i]);
    }
    right[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],v[i]);
    }
    for(int i=1;i<n-1;i++)
    {
        int var=min(left[i-1],right[i+1])-v[i];
        if(var>0)
        {
            res=res+var;
        }
    }
    return res;
}

int main()
{
    vector<int> v{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout<<rainWater2(v);

}