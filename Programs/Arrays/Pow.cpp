#include<iostream>
using namespace std;

int pow(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        
        int res = x*pow(x,n+1);
        double ret=1/res;
        return ret;
    }
    else
    {
        int r= x*pow(x,n-1);
        return r;
    }
}

int main()
{
    cout<<pow(2,-4);
}