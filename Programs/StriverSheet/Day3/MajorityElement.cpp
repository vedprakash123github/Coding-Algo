#include<iostream>
#include<vector>
using namespace std;

int major(vector<int>& nums)
{
    int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if(num==candidate) count += 1; 
            else count -= 1; 
        }

        return candidate;
}

int main()
{
    vector<int> p={3,2,3,5,4};
    cout<<major(p);
}