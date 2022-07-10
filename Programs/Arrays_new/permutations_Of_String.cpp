#include<iostream>
using namespace std;

void swap(char &a, char &b)
{
    char temp=a;
    a=b;
    b=temp;
}


//approach: swap the characters at each index;
void permut(string s, int l, int r)
{
    //abc;
    if(l>=r)
    {
        cout<<s<<endl;
        return;
    }
    for(int i=l;i<s.length();i++)
    {
        swap(s[l],s[i]);
        permut(s,l+1,r);
        swap(s[l],s[i]);
    }
}

int main()
{
    string s="123";
    permut(s,0,2);
}