#include<iostream>
using namespace std;

int combination(int n,int r)
{
    double res=1;
    for(int i=1;i<=r;i++)
    {
        res=res*(n-r+i)/i;   
     }
     return res;
}

int permutation(int n,int r)
{
    double res=1;
    for(int i=1;i<=r;i++)
    {
        res=res*(n-r+i);   
     }
     return res;
}
int uniquePaths(int m, int n) {
            int N = n + m - 2;
            int r = n - 1; 
            double res = 1;
            
            for (int i = 1; i <= r; i++)
                res = res * (N - r + i) / i;
            return (int)res;
}
int main()
{
   // cout<<combination(10,3);
    cout<<uniquePaths(4,3);
}