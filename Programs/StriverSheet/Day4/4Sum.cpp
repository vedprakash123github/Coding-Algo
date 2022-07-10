#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fSum(vector<int>& nums, int target)
    {
    int n=nums.size();
    vector<vector<int>> res;
    if(nums.empty())
    {
        return res;
    }
    sort(nums.begin(),nums.end());
    
    for(int i=0;i<n;i++)
    {
        int target_1=target-nums[i];
        for(int j=i+1;j<n;j++)
        {
            int l=j+1;
           int r=n-1;
            int target_2=target_1-nums[j];
            while(l<r)
            {
                int two_sum=nums[l]+nums[r];
                if(two_sum==target_2)
                {
                    vector<int> p(4,0);
                    p[0]=nums[i];
                    p[1]=nums[j];
                    p[2]=nums[l];
                    p[3]=nums[r];
                    res.push_back(p);
                    while(l<r && p[2]==nums[l]){++l;}
                    while(l<r && p[3]==nums[r]){--r;}
                }
                else if(two_sum>target_2)
                {
                   r--;
                    
                }
                else
                {
                    l++;
                }
            }
            while(j+1<n && nums[j]==nums[j+1]){++j;}
        }
        while(i+1<n && nums[i]==nums[i+1]){++i;}
    }
    return res;

    }

int main()
{
    vector<int> v{1,0,-1,0,-2,2};
    vector<vector<int>> r=fSum(v,0);
    for(int i=0;i<r.size();i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
}

/*

    vector<vector<int>> fourSum(vector<int>& num, int target) {
         vector<vector<int> > res;
        
        if (num.empty())
            return res;
        int n = num.size(); 
        sort(num.begin(),num.end());
    
        for (int i = 0; i < n; i++) {
        
            int target_3 = target - num[i];
        
            for (int j = i + 1; j < n; j++) {
            
                int target_2 = target_3 - num[j];
            
                int front = j + 1;
                int back = n - 1;
            
                while(front < back) {
                
                    int two_sum = num[front] + num[back];
                
                    if (two_sum < target_2) front++;
                
                    else if (two_sum > target_2) back--;
                
                    else {
                    
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = num[i];
                        quadruplet[1] = num[j];
                        quadruplet[2] = num[front];
                        quadruplet[3] = num[back];
                        res.push_back(quadruplet);
                    
                        // Processing the duplicates of number 3
                        while (front < back && num[front] == quadruplet[2]) ++front;
                    
                        // Processing the duplicates of number 4
                        while (front < back && num[back] == quadruplet[3]) --back;
                
                    }
                }
                
                // Processing the duplicates of number 2
                while(j + 1 < n && num[j + 1] == num[j]) ++j;
            }
        
            // Processing the duplicates of number 1
            while (i + 1 < n && num[i + 1] == num[i]) ++i;
        
        }
    
        return res;
    }


int main()
{
    Solution obj;
    vector<int> v{1,0,-1,0,-2,2};
    
    vector<vector<int>> sum=obj.fourSum(v,0);
    cout<<"The unique quadruplets are"<<endl;
    for (int i = 0; i < sum.size(); i++) {
        for (int j = 0; j < sum[i].size(); j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
}




*/

