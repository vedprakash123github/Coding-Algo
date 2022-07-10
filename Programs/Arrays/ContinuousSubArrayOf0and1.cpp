#include<iostream>
#include<vector>
using namespace std;

int maxSubarray(vector<int> nums)
{
    int max_length=0;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i;i<nums.size();j++)
        {
            int zero=0,one=0;
            for(int k=i;k<=j;k++)
            {
                if(nums[k]==0)
                {
                    zero++;
                }
                if(nums[k]==1)
                {
                    one++;
                }
            }
            if(zero==one)
            {
                max_length=max(max_length,j-i+1);
            }
        }
    }
    return max_length;
}

int main()
{
    vector<int> p{0,1,0};
    cout<<maxSubarray(p);
}