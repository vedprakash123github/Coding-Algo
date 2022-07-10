#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& nums) {
        int mn=INT_MAX;
        int profit=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            mn=min(mn,nums[i]);
            profit=max(profit,nums[i]-mn);
        }
        return profit;
    }

int main()
{
    vector<int> v{7,1,5,3,6,4};
    cout<<maxProfit(v);
}
