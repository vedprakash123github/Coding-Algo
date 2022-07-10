#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> res;

void subsets(vector<int>& sub,int index,vector<int>& nums)
{
    if(index==nums.size())
    {
        res.push_back(sub);
        return;
    }
     //if we are not adding the current element into the subset
     subsets(sub,index+1,nums);
     // if you are adding the current elemnent intot the subset
     sub.push_back(nums[index]);
     subsets(sub,index+1,nums);
     sub.pop_back();
}


int main()
{
    vector<int> nums{1,2,3};
    vector<int> sub;

    subsets(sub,0,nums);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}