#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

string removed(string num,int k)
{
   string res="";
   for(int i=0;i<num.length();i++)
   {
       while(!res.empty() && num[i]<res.back() && k)
       {
           res.pop_back();
           k--;
       }
       if(!res.empty() || num[i]!=0)
       {
           res.push_back(num[i]);
       }
       
    }
    while(k>0 && !res.empty())
       {
           res.pop_back();
           k--;
       }
       return res;
}
int main()
{
    string x="765";
   // cout<<removed(x,2);
   
}