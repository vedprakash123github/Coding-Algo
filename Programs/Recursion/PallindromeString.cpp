#include<iostream>
using namespace std;

bool Pallindrome(int i,string s, int n)
{
    if(i>=n/2) return true;
    if(s[i]!=s[n-1-i]) return false;
    return Pallindrome(i+1,s,n);
}

int main()
{
    string s="mADAm";
    cout<<Pallindrome(0,s,5);
}