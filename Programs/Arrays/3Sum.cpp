#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;

string IntToString(vector<int>& num)
{
    int n=num.size();
    string d="_";
    string res="";
    for(int i=0;i<num.size();i++)
    {
        if(i==n-1)
        {
            res=res+to_string(num[i]);
        }
        else
        {
        res=res+(to_string(num[i])+d);
        }
        //res=s.append(d);

    }
    return res;
}

vector<int> StringToInt(string str)
{
    stringstream ss;
    ss<<str;
    vector<int> v;
    int n;
    while(ss>>n)
    {
        if (ss.peek() == '_')
        {
        ss.ignore();}
        v.push_back(n);
    }
    return v;
}


vector<vector<int>> Sum(vector<int>& v)
{
    int n=v.size();
    unordered_map<int,int> mp;
    vector<vector<int>> res;
    unordered_set<string> s;
    for(int i=0;i<n-2;i++)
    {
        int curr_sum=0-v[i];
        for(int j=i+1;j<n;j++)
        {   mp.erase(v[j]); //need to erase v[j] bcz it may be the same element which is looked twice ie. during vector as v[j] and at the same time in the map as well.
            if(mp.find(curr_sum-v[j])!=mp.end())
            {
               // res.push_back({v[i],v[j],curr_sum-v[j]});
               vector<int> arr{v[i],v[j],curr_sum-v[j]};
               sort(arr.begin(),arr.end());
               string itos=IntToString(arr);
               s.insert(itos);
            }
            else
            {
                mp.insert({v[j],j});
            }
            mp.insert({v[j],j});
        }
    }
    for(auto it: s)
    {
        vector<int> p=StringToInt(it);
        res.push_back(p);
    }
    return res;
}
vector<vector<int>> Sum_3(vector<int> v) //optimal approach.
{
    vector<vector<int>> res;
    int n=v.size();
    if(n<3) return {};
    sort(v.begin(),v.end());
    if(v[0]>0) return {};
    for(int i=0;i<n;i++)
    {
        if(i>0 && v[i]==v[i-1]) continue;
        int j=i+1,k=n-1,sum=0;
        while(j<k)
        {
            sum=v[i]+v[j]+v[k];
            if(sum<0) j++;
            else if(sum>0) k--;
            else
            {
                res.push_back({v[i],v[j],v[k]});
                int lo=v[j];
                int hi=v[k];
                while(j<k && v[j]==lo) j++;
                while(j<k && v[k]== hi) k--;
            }
        }
    }
    return res;
}

int main()
{
    //vector<int> v{24,2,15,-1,-3,4};
    vector<int> v{-1,0,1,2,-1,-4};
    vector<vector<int>> r=Sum_3(v);
    for(int i=0;i<r.size();i++)
    {
        for(int j=0;j<r[i].size();j++)
        {
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
}



