#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    
  int c='a';
    int x=c;
    cout<<c;
    vector<string> s{"ShVed","ShManoj","shAtul","ShZerodha"};
    s.push_back("Geeta");
   /* for(int i=0;i<s.size();i++)
    {
        transform(s[i].begin(), s[i].end(), s[i].begin(), ::tolower);
    }*/
   sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<endl;
    }
    /*string a=s[0];
    string b=s[3];
    string res="";
    for(int j=0;j<a.size();j++)
    {
        if(a[j]==b[j])
        {
            res=res+a[j];
        }
    }
    cout<<res<<endl;*/
    
}