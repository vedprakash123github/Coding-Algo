#include<iostream>
#include<vector>
using namespace std;

vector<int> res(n,-1);

//0,1,1,2,3,5,8,13,21,34
int fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(res[n]!=-1) return res[n];
    if(res[n]==-1) res[n];
    return fib(n-1)+fib(n-2);
}

int main()
{
    cout<<fib(4);

}