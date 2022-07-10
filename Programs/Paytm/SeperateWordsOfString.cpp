#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main()
{
    stringstream ss;
    string st="";
    ss<<st;
    int word;
    vector<int> v;
    while(ss>>word)
    {
        v.push_back(word);
    }

    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
}