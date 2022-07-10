#include<iostream>
using namespace std;

void print(int i, int n)
{
    if(i>n) return;
    print(i+1,n);
    cout<<i<<" ";  //backtracking
}

int fact(int n)
{
    if(n==0) return 1;
    return n*fact(n-1);
}

int main()
{
    int i=0;
    int n=3;
    print(i,n);
}