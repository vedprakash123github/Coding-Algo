#include<iostream>
#include<vector>
using namespace std;

void print(int cnt)
{
    if(cnt>5)
    {
        return;
    }
   // cout<<cnt++<<endl;
   
   
    print(cnt+1);
    cout<<cnt<<endl;
}

int main()
{
    int cn=1;
    print(cn);
    //cout<<cn<<endl;
}