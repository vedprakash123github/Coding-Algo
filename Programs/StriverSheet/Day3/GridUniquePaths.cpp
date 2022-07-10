#include<iostream>
#include<vector>
using namespace std;

int paths(int i,int j, int m, int n)
{
    if(i==m-1 && j==n-1)
    {
        return 1;
    }
    if(i>=m || j>=n)
    {
        return 0;
    }
    return paths(i+1,j,m,n)+paths(i,j+1,m,n);
}

int dppaths(int i,int j, int m, int n, vector<vector<int>>& v)
{
    if(i==m-1 && j==n-1)
    {
        return 1;
    }
    if(i>=m || j>=n)
    {
        return 0;
    }
    if(v[i][j]!= -1) return v[i][j];
    return v[i][j]= dppaths(i+1,j,m,n,v)+dppaths(i,j+1,m,n,v);
}
int main()
{
    vector<vector<int>> p(3,vector<int>(2,-1));
    cout<<dppaths(0,0,3,2,p);
}