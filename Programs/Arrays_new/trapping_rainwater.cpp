#include<iostream>
#include<vector>
using namespace std;

int rain(vector<int> v)
{
    int res=0;

    for(int i=1;i<v.size()-1;i++)
    {
        //left
        int left=v[i];
        for(int j=0;j<i;j++)
        {
            left=max(v[j],left);
        }
        int right=v[i];
        for(int k=i+1;k<v.size();k++)
        {
            right=max(v[k],right);
        }
    }
}