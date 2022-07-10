#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
#include<stack>
#include<unordered_map>
using namespace std;

void reverseString(string s)
{
    stack<string> st;

    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<":";
    }
}

vector<string> StringToInt(string str)
{
    stack<string> st;
    stringstream ss;
    ss<<str;
    vector<string> v;
    string n;
    while(ss>>n)
    {
        if (ss.peek() == ' ')
        {
            ss.ignore();
        }
       // v.push_back(n);
       st.push(n);
    }
    while(!st.empty()) 
    {
        v.push_back(st.top());
        st.pop();
    }
    return v;
}

string removeDup(string str)
{
    vector<string> v;
    string word="";
    for(auto x:str)
    {
        if(x==' ')
        {
            v.push_back(word);
            word="";
        }
        else
        {
            word=word+x;
        }
    }
    v.push_back(word);
    string res="";
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i] != "")
        {
        if(i==0)
       {
           res=res+v[i];
       }
       else 
       {  
         res=res+v[i]+" ";
       }
        }
    }
return res;
}

void reverseWord(string s)
{
    vector<string> v;
    stringstream ss;
    ss<<s;
    string word;
    while(ss>>word)
    {
       /* if(ss.peek()=='_')
       { ss.ignore();}*/
        v.push_back(word);
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
}
void stringReverse(string s)
{
    int n=s.size();
    for(int i=0;i<n/2;i++)
    {
        char temp=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }

}
void countFreq(string s)
{
    unordered_map<string,int> mp;
    stringstream ss;
    ss<<s;
    string word;
    while(ss>>word)
    {
        mp[word]++;
    }

    for(auto& it:mp)
    {
        cout<<it.first<<" : "<<it.second<<endl;
    }
}

int main()
{
    string s="blue is blue";
   // reverseWord(s);
  // reverseWord(s);
   countFreq(s);
   /* reverse(s.begin(),s.end());
    cout<<s;*/
   // cout<<removeDup(s);
   // reverseString(s);
  /* string st;
   vector<string> v=StringToInt(s);
   for(int i=0;i<v.size();i++)
   {
       if(i==v.size()-1)
       {
           st=st+v[i];
       }
      else 
      {st=st+v[i]+" ";}
   }
   cout<<st;*/
   
}