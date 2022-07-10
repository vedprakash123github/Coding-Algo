#include<iostream>
#include<vector>
using namespace std;

//This problem is similar to printing subsequences only thing which we did is we have just carried forward one variable so to keep 
//track of sum of the subset and if the subset sum is equal to the sum at any point then just print the subset.
void sub(int i,vector<int>& v, int s,vector<int> nums,int sum,int n)
{
    if(i>=n)
    {
        if(s==sum)
        {

            for(auto x:v)
            {cout<<x<<" ";}
            cout<<endl;
        }
        return;
    }
        //adding the current element to the vector;
        v.push_back(nums[i]);
        s+=nums[i];
        sub(i+1,v,s,nums,sum,n);
        v.pop_back();
        s-=nums[i];
        //not adding the current element;
        sub(i+1,v,s,nums,sum,n);

}



//tis version sub1() is for the case when we just want one subset which is having sum as k;
// the trick for this is when you get the subset sum as equal to the sum return true from there and check the result of the fundtion
// call if the call returned true just return true;

bool sub1(int i,vector<int>& v,int s,vector<int> nums,int sum, int n)
{
    //base condition
    if(i>=n)
    {
        if(s==sum)
        {
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        return true;
        }
        return false;
    }
    //if adding current element
    v.push_back(nums[i]);
    s+=nums[i];
    if(sub1(i+1,v,s,nums,sum,n)==true) return true;
    v.pop_back();
    s-=nums[i];
    //if not adding the current element;
    if(sub1(i+1,v,s,nums,sum,n)==true) return true;
    return false;
}

//this version is to return the count of the subsets having sum as k;
int subc(int i,vector<int>& v,int s,vector<int> nums,int sum, int n)
{
    //base condition
    if(i>=n)
    {
        if(s==sum)
        {
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        return 1;
        }
        return 0;
    }
    //if adding current element
    v.push_back(nums[i]);
    s+=nums[i];
    int l=subc(i+1,v,s,nums,sum,n);
    v.pop_back();
    s-=nums[i];
    //if not adding the current element;
    int r=subc(i+1,v,s,nums,sum,n);
    return l+r;
}


int main()
{
    vector<int> v;
    vector<int> nums{2,1,1};
    
    cout<<"the count is :"<<subc(0,v,0,nums,2,3);
}