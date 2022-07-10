#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   /* map<int,int> mp;
    mp[10]=0;
    mp[20]=1;
    mp[30]=2;
    map<int,int>::iterator it=mp.begin();
    while(it!=mp.end())
    {
        cout<<it->first<<" : "<<it->second<<endl;
        it++;
    }*/

    vector<int> v{-1,0,1,2,-1,-4};
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

}