#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

//in the subsequence questions we follow the approach of taking/not taking the element at a index.
void sub(int i,vector<int>& v,vector<int> s,int n,int k)
{
    if(i>=n)
    {
        int subSum = accumulate(s.begin(), s.end(), 0);
        if(subSum==k)
        {
            cout<<"subsequence having the sum as :"<<k<<endl;
        }
        // for(int i=0;i<v.size();i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        return;
    }
    //add the element at current index;
    sub(i+1,v,s,n,k);  //not take the element at current index
    v.push_back(s[i]);
    sub(i+1,v,s,n,k);  // take the element at current index
    v.pop_back();
    // do not add the element at the current index.
    

}



int main()
{
    vector<int> v;
    vector<int> s{3,5,6,7};
    sub(0,v,s,4,8);
}