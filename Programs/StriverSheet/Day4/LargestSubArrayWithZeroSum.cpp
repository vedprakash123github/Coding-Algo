#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int fun(vector<int> &v)
{
    unordered_map<int,int> mp;
    int sum=0,len=0,max_len=0;
    for(int i=0;i<v.size();i++)
    {
        sum=sum+v[i];
        if(sum==0)
        {
            max_len=i+1;
        }
        else
        {
        if(mp.find(sum)!=mp.end())
        {
            len = i-mp[sum];
            max_len=max(max_len,len);
        }
        else
        {
            mp[sum]=i;
        }
        }
    }
    
    return max_len;
}
int main()
{
    vector<int> v{-1, 1 ,-1, 1};
    cout<<"the length of array is : "<<fun(v)<<endl;
}