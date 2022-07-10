#include<iostream>
#include<string>
#include<sstream>
using namespace std;


int main()
{
    /*string s="ved/prakash/sharma/lpu/btech";
    int index=0;
    int n=s.length();
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='/')
        {
            int len=i-index;
            cout<<s.substr(index,len)<<endl;
            index=i+1;

        }
    }
    int l=n-index;
    cout<<s.substr(index,l);*/
    string res="";
    string temp[]={"home1","home2","home3"};
    
    int i=0;
    while(i<3)
    {
        res="/"+temp[i]+res;
        i++;
    }
    cout<<res<<endl;
}