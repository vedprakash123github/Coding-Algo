#include<iostream>
#include<string>
#include<vector>
using namespace std;

void countFreq(string s)
{
    vector<int> v(26,0);
    for(int i=0;i<s.size();i++)
    {
        v[s[i]-'a']++;
    }

    for(int j=0;j<26;j++)
    {
        char c='a'+j;
        cout<<c<<" : "<<v[j]<<endl;
    }
}

int main()
{
    string s="abAB";
    countFreq(s);
  /* char c=97;
   int x='a';
   char t='a'+2;*/
   //cout<<c<<" " <<x<<endl;
   //cout<<t<<endl;
}