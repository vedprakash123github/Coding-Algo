#include<iostream>
#include<vector>
using namespace std;

void swap(int& x,int& y)
{
    int temp=x;
    x=y;
    y=temp;
}

void rev(vector<int>& arr)
{
    int sz=arr.size();
    for(int i=0;i<=sz/2;i++)
    {
        swap(arr[i],arr[sz-1-i]);
    }
}
void rotate(vector<vector<int>>& v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v[0].size();j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }

    for(int k=0;k<v.size();k++)
    {
        rev(v[k]);
    }
    
}

int main()
{
    int arr[]={10,20,30,40};
    int sz=sizeof(arr)/sizeof(arr[0]);
    
    vector<vector<int>> p{{1,2,3},{4,5,6},{7,8,9}};
    rotate(p);
    for(int i=0;i<p.size();i++)
    {
        for(int j=0;j<p[0].size();j++)
        {
            cout<<p[i][j]<<",";
        }
        cout<<endl;
    }
    
}