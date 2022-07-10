#include<iostream>
#include<string>
using namespace std;

void subString(string str)
{
    for(int start=0;start<str.size();start++)
    {
        for(int end=1;end<=str.size()-start;end++)
        {
            cout<<str.substr(start,end)<<" ";
        }
        cout<<endl;
        
    }
}
int main()
{
    string s="abcabcbb";
   subString(s);
  // cout<<s.size();
   
}