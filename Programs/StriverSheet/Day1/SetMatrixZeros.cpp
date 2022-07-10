#include<iostream>
#include<vector>
using namespace std;

void setMatrix(vector<vector<int>>& v) //brute force approach
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            if(v[i][j]==0)
            {
                //set entire row to-1;
                for(int r=0;r<v[i].size();r++)
                {
                    if(v[i][r]!=0)  // the element is not equal to 0;
                    v[i][r]=-1; // for row i will be same.
                }
                //set entire column to -1;
                for(int c=0;c<v.size();c++)
                {
                    if(v[c][j]!=0) // the element is not equal to 0;
                    {
                        v[c][j]=-1;
                    }
                }
            }
        }
    }

    for(int k=0;k<v.size();k++)
    {
        for(int l=0;l<v[k].size();l++)
        {
            if(v[k][l]==-1)  v[k][l]=0;
        }
    }
}

void setMatrix2(vector<vector<int>>& v) //optimised Approach
{
    int row=v.size();
    int col=v[0].size();
    vector<int> r(row,-1);
    vector<int> c(col,-1);
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            if(v[i][j]==0)
            {
                r[i]=0;
                c[j]=0;
            }
        }
    }

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            if(r[i]==0 || c[j]==0) v[i][j]=0;
        }
    }
}

void setMatrix3(vector<vector<int>>& v)
{
    int col0=1; // col0 will represent the column 0 values in the matrix whether this column needs tobe set to 0 or not;
    int row=v.size();
    int col=v[0].size();
    for(int i=0;i<row;i++)  // set the row 0 and col 0 as zero for the elements having value zero;
    {
        if(v[i][0]==0) col0=0;
        for(int j=1;j<col;j++)
        {
            if(v[i][j]==0)
            {
                v[i][0]=v[0][j]=0;
            }
        }
    }
    for(int i=row-1;i>=0;i--)
    {
        for(int j=col-1;j>=1;j--)
        {
            if(v[i][0]==0 || v[0][j]==0) v[i][j]=0;
        }
        if(col0==0) v[i][0]=0;
    }
}

int main()
{
    vector<vector<int>> v{{0,2,3},{4,1,5},{6,7,8}};
    setMatrix3(v);
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}