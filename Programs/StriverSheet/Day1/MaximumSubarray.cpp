#include<iostream>
#include<vector>
using namespace std;

 int maxSubArray(vector<int>& nums) 
    {     // in this approach we will only add +ve elements to the sum. if sum becomes less than 0 then we will set it to 0;
        if(nums.size()==0) return 0;
        int max_sum=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(sum>max_sum)
            {
                max_sum=sum;
            }
            if(sum<0) sum=0;
        }
        return max_sum;
    }

    //approach 2
    int maxSubArray2(vector<int>& nums) {
       // in this approach we will compare the array element every time with the sum so far and will keep the maximum of array element and the sum so far.
        if(nums.empty())
        {
            return INT_MIN;
        }
        
       int maxsum=nums[0],maxyet=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxyet=max(maxyet+nums[i],nums[i]); // keep maximum of array element and sum obtained so far in maxyet variable.
             maxsum=max(maxsum,maxyet);
        }
        return maxsum;
    }
        
int main()
{
    vector<int> v{1,2,4,-4,-12,45,35};
    maxSubArray(v);
}