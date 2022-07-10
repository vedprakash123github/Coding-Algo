#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> pascal(int num)
{
    vector<vector<int>> p(num);
    for(int i=0;i<p.size();i++)
    {
        p[i].resize(i+1);
    }
    for(int j=0;j<p.size();j++)
    {
        p[j][0]=p[j][j]=1;
    }
    for(int k=2;k<p.size();k++)
    {
        for(int l=1;l<p[k].size()-1;l++)
        {
            p[k][l]=p[k-1][l-1]+p[k-1][l];
        }
    }
    return p;
}
int main()
{
    int x=5;
    vector<vector<int>> res=pascal(x);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j];
        }
        cout<<endl;
    }
}