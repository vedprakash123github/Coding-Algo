#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool pallindromeString(string s)
{
    int n=s.size();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
   /* string s="ved ashutosh sharma 098";
    int r = s.size();
        
        vector<int> vec;
        int i=0;
        while(i<r)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                vec.push_back(s[i]);
            i+=1;
        }
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<endl;
        }*/
   // cout<<isalpha('a');
   string s="ved";
   cout<<pallindromeString(s);
}