#include<iostream>
#include<string>
using namespace std;



//check if s1 is substring of s2;
//s1="akash"    s2="vedprakash"
int substring(string s1, string s2)
{
    int m=s1.length();
    int n=s2.length();
    int i;
    if(s2.find(s1)!=string::npos)
    {
        i=s2.find(s1);
    }
    else {i=0;}
    for(;i<=n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(s2[i+j]!=s1[j])
            {
                break;
            }
        }

        if(j==m) return i;
    }
    
    return -1;
}

int main()
{
    string s1="akash";
    string s2="vedprakash";
    cout<<substring(s1,s2);
    // cout<<s2.find(s1);
    
}

