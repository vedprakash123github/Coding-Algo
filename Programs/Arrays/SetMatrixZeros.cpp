#include<iostream>
#include<vector>
using namespace std;

void set(vector<vector<int>>& p)
{
    int col0=1,rows=p.size(), cols=p[0].size();
    for(int i=0;i<rows;i++)
    {
        if(p[i][0]==0)
            col0=0;
        for(int j=1;j<cols;j++)
        {
            if(p[i][j]==0)
            {
                p[i][0]=p[0][j]=0;
            }
        }
    }
    for(int k=rows-1;k>=0;k--)
    {
        for(int l=cols-1;l>=1;l--)
        {
            if(p[k][0]==0 || p[0][l]==0)
            {
                p[k][l]=0;
            }
        }
        if(col0==0)
        {
            p[k][0]=0;
        }
    }

}
int main()
{
    vector<vector<int>> v{{1,1,1},{1,0,1},{1,1,1}};
    set(v);
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
            {
                cout<<v[i][j]<<",";
            }
        cout<<"  ";
    }
}