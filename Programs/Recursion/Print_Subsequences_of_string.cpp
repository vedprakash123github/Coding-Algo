#include<iostream>
#include<string>
#include<unordered_set>
#include<vector>
using namespace std;

void sub1(int i,string st,string s,int n)
    {
        if(i>=n)
        {
            cout<<st<<endl;
            return;
            
        }
        st=st+s[i];
        sub1(i+1,st,s,n);
        st.pop_back();
        sub1(i+1,st,s,n);
    }

     int sub(int i,string st,string s,int n,unordered_set<string> us)
    {
        if(i>=n)
        {
            if(us.find(st)!=us.end())
            { return 1;}
            else
            {   return 0;}
            
        }
        st=st+s[i];
       int l= sub(i+1,st,s,n,us);
        st.pop_back();
       int r= sub(i+1,st,s,n,us);
        return l+r;
    }

    int main()
    {
        vector<string> words{"ahjpjau","ja","ahbwzgqnuk","tnmlanowax"};
         unordered_set<string> us;
        for(int i=0;i<words.size();i++)
        {
            us.insert(words[i]);
        }

       /* string s="dsahjpjauf";
        int n=s.length();
        string st="";
        sub1(0,st,s,n);*/
        //cout<<sub(0,st,s,n,us);
       unordered_set<string>::iterator it=us.begin();
        for(;it!=us.end();it++)
        {
            cout<<*it<<endl;
        }
       /* if(us.find(x)!=us.end())
        {
            cout<<"found "<<x<<endl;
        }*/
    }