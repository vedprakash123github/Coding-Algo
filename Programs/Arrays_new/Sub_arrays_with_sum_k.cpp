#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> subArray(vector<int> v,int k)
{
    vector<int> res;
    map<int,int> mp;
    int curr_sum=0,ans=0,s_index=0,end_index=0;
    for(int i=0;i<v.size();i++)
    {
        curr_sum+=v[i];
        mp[curr_sum]=i;
        if(mp.find(curr_sum-k)!=mp.end())
        {
            //ans=ans+mp[curr_sum-k];
            s_index=mp[curr_sum-k]+1;
            end_index=i;
            cout<<mp[curr_sum-k]<<"  : "<<s_index<<" : "<<end_index<<endl;
            break;
        }
        
    }
    cout<<"-1"<<endl;
    
    //res.assign(v[s_index],v[end_index]);
    return res;

}

int main()
{
    vector<int> v={5,10,20,100,105};
    vector<int> res=subArray(v,110);
    // for(int i=0;i<res.size();i++)
    // {
    //     cout<<res[i]<<endl;
    // }
}