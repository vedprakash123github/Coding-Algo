#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) 
    {
        int red=0,white=0,blue=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                red++;
                continue;
            }
            else if(nums[i]==1)
            {
                white++;
                continue;
            }
            else
            {
                blue++;
                continue;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(red!=0)
            {
                nums[i]=0;
                red--;
                continue;
            }
            if(white!=0)
            {
                nums[i]=1;
                white--;
                continue;
            }
            if(blue!=0)
            {
                nums[i]=2;
                blue--;
                continue;
            }
        }
    }

    int main()
    {
        vector<int> v{0,2,1,0,2,1};
        sortColors(v);
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }