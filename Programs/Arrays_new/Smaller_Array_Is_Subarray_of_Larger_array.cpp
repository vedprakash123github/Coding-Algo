#include<iostream>
#include<vector>
using namespace std;

bool isSubarray(vector<int>& s,vector<int>& l)
{
    int j=0;
    for(int i=0;i<l.size();i++)
    {
        if(l[i]==s[j])
        {
            j++;
        }
    }
    if(j==s.size()) return true;
    return false;
}

int main()
{
    vector<int> s{1,2,3};
    vector<int> l{10,1,20,2,30};
    cout<<isSubarray(s,l);
}