#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findDuplicate(vector<int>& nums) {
    
        int slow = nums[0];
        int fast = nums[0]; 
        do {
            slow = nums[slow]; 
            fast = nums[nums[fast]]; 
        } while(slow != fast); 
        
        fast = nums[0]; 
        while(slow != fast) {
            slow = nums[slow]; 
            fast = nums[fast]; 
        }
        
        return slow; 
    }

vector<int> repeatedNumber(const vector<int> &A) 
{
    
    vector<int> res;
    vector<int> dp=A;
    int dup=findDuplicate(dp);
    
    int n=A.size();
    int expectedSum= (n*(n+1))/2;
    int realSum=0;
    for(int i=0;i<A.size();i++)
    {
        realSum=realSum+A[i];
    }
    int diff=realSum-dup;
    int missing=expectedSum-diff;
    if(dup<missing)
    {
        res.push_back(dup);
        res.push_back(missing);
        
        return res;
    }
    else
    {
        res.push_back(missing);
        res.push_back(dup);
        return res;
    }


}
vector<int> optimised(vector<int> A)
{
    vector<int> ans;
    sort(A.begin(),A.end());
    int x=1;
    while(x<=A.size())
    {
        if(A[x-1]!=x)
        {
            ans.push_back(x-1);
            ans.push_back(x);
        }
        x++;
    }
    return ans;
}
int main()
{
    vector<int> a{1,2,4,4,4};
    vector<int> r = optimised(a);
    for(int i=0;i<r.size();i++)
    {
        cout<<r[i]<<endl;
    }
    //cout<<findDuplicate(a);

}