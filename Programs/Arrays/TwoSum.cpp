#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

/*vector<int> sum(vector<int>& v,int target)
{
    vector<int> rs;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i;j<v.size();j++)
        {
            if(v[i]+v[j]==target)
            {
                //rs={i,j};
                //rs.insert(rs.end(),{i,j});
                rs.push_back({i,j});
                //rs.push_back(j);
            }
        }
    }
    return rs;
}*/

vector<int> sum(vector<int>& v,int target)
{
    //vector<int,int> rs;
    unordered_map<int,int> mp;
    for(int i=0;i<v.size();i++)
    {
        if(mp.find(target-v[i]) != mp.end())
        {       
                return {mp[target-v[i]],i};
        }
        mp[v[i]]=i;
    }
    return {};
}

int* rt()
{   
    static int arr[5];
        arr[0]=10;
        arr[1]=20;
    return arr;
}

int main()
{
    vector<int> v{2,7,11,7,0,0,0};
   int arr[7]={10,20,30,40};
   for(int i=0;i<7;i++)
   {
       cout<<arr+i<<" : "<<*(arr+i)<<" : "<<&v+i<<" : "<<v[i]<<endl;
   }
   
   //cout<<ptr;
}