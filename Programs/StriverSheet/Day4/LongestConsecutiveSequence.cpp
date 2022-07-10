#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int longestConsecutive(vector<int>& v)
{
    unordered_set<int> s;
    for(auto it:v)
    {
        s.insert(it);
    }

    int max_length=0;
    for(int i=0;i<v.size();i++)
    {
       
        if(!s.count(v[i]-1))
        {
             int length=1;
            int num=v[i];
            while(s.count(num+1))
            {
                length++;
                num++;
            }
            max_length=max(max_length,length);
        }
         
    }
    return max_length;
}

int main()
{
    vector<int> p{5,1,9,7,10,8,6};
    cout<<longestConsecutive(p);
}