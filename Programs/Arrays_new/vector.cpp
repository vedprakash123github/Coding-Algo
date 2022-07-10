#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> st={"aed","ashu","anshu","sachin"};
    vector<vector<int>> v(4,vector<int>(26));
    for(int i=0;i<st.size();i++)
    {
        for(int j=0;j<st[i].size();j++)
        {
            v[i][st[i][j]-'a']++;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            if(v[i][j] && v[i+1][j])
            {
            char p='a'+j;
            cout<<p<<" ";
            }
        }
        cout<<endl;
    }
    
}