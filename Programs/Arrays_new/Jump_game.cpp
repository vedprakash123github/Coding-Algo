#include<iostream>
#include<vector>
using namespace std;

int maxResult(vector<int>& nums, int k) {
        
        if(k==0) return nums[0];
        int max=INT_MIN,index=0,sum=nums[0];
        int i=0;
       // cout<<"sum before while loop : "<<sum<<endl;
        while(i<nums.size())
        {
            if(i>=nums.size()-1) break;
            for(int j=i+1;j<=i+k;j++)
            {
               
                if(nums[j]> max)
                {
                    max=nums[j];
                    index=j;
                }
                
            }
            cout<<"index :"<<index<<endl;
            i=index;
            sum=sum+nums[index];
            max=INT_MIN;
            cout<<"sum : "<<sum<<endl;
        }
        return sum;
    }

    int main()
    {
        vector<int> nums{100,-100,-300,-300,-300,-100,100};
        int k=4;
        cout<<maxResult(nums,k);
    }