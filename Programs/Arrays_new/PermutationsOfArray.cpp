#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void p(vector<int>& nums,  vector<int>& ds,int freq[],vector<vector<int>>& res)
{
    if(ds.size()==nums.size())
    {
        res.push_back(ds);
    }
    for(int i=0;i<nums.size();i++)
    {
        if(!freq[i])
        {
            ds.push_back(nums[i]);
            freq[i]=1;
            p(nums,ds,freq,res);
            freq[i]=0;
            ds.pop_back();
        }
    }
}
vector<vector<int>> permutate(vector<int> nums)
{
    int n=nums.size();
    vector<vector<int>> res;
    vector<int> ds;
    int freq[n]={0};
    p(nums,ds,freq,res);
    return res;
}

int main()
{
    vector<int> nums{1,2,3};
    vector<vector<int>> r=permutate(nums);
    for(int i=0;i<r.size();i++)
    {
        for(int j=0;j<r[i].size();j++)
        {
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
}