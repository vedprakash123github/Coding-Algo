#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void swap(int& x,int& y)
{
    int temp=x;
    x=y;
    y=temp;
}

void nextPer(vector<int>& v)
{
    int n=v.size();
    int i=n-2,j=n-1;
    while(v[i]>=v[i+1]) {i--;} //first step: traverse the array from back and find the first element in the array such that v[i]<v[i+1]
    if(i==0){reverse(v.begin(),v.end());}
    else
    {
    while(v[j]<=v[i]){j--;} //second step : after finding the element in first step now again traverse the array from  back and find the first elemnt which is greater than v[i] found in first step.
    swap(v[i],v[j]); //third step: swap botht he elements
    reverse(v.begin()+i+1,v.end()); //fourth step: reverse the array after the ith index
    }
}


 void nextPermutation(vector<int>& nums) {
         int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }


int main()
{
    vector<int> v{1,2,3};
    nextPer(v);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;;
}