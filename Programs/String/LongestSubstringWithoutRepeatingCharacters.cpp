#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

/*int LongestSubstring(string s)
{
    int n=s.size();
    unordered_set<char> st;
    int left=0,right=0;
    int len=0;
    while(right<n)
    {
        if(st.find(s[right])!=st.end())
        {
            st.erase(s[left]);
            left++;
        }
        else{
            st.insert(s[right]);
            len=max(len,right-left+1);
            right++;
        }
        
    }
    return len;
}*/

int LongestSubstring(string s)
{
    int n=s.size();
    unordered_map<char,int> mp;
    int left=0,right=0;
    int len=0;
    while(right<n)
    {
        if(mp.find(s[right])!=mp.end() && mp[s[right]]>=left)
        {
            left=mp[s[right]]+1;
            mp[s[right]]=right;
            right++;
        }
        else
        {
            mp[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
    }
    return len;
}

int main()
{
    string s="tmmzuxt";
    cout<<LongestSubstring(s);
}