#include<iostream>
#include<vector>
using namespace std;

int kadane(vector<int> &v, vector<int> &r)
{
    int max_sum=0, max_ending_here=0,s=0,end=0;
    for(int i=0;i<v.size();i++)
    {
        max_sum=max_sum+v[i];
        if(max_sum>max_ending_here)
        {
            max_ending_here=max_sum;
            end=i;
        }
        if(max_sum<0)
        {
            max_sum=0;
            s=i+1;
        }
    }
    r.push_back(s);
    r.push_back(end);
    return  max_ending_here;
}
int main()
{
    vector<int> v={-2,1,-3,4,-1,2,1,-5,4};
    vector<int> r;
    cout<<"max sum is : "<<kadane(v,r)<<endl;
  
    for(int i=r[0];i<=r[1];i++)
    {
        cout<<v[i]<<endl;
    }
}