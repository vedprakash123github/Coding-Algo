#include<iostream>
#include<vector>
using namespace std;

int winner(vector<vector<int>> v)
{
    int rcnt_0=0,rcnt_1=0;
    for(int i=0;i<v.size();i++) //rows
    {   
        for(int j=0;j<v[i].size();j++) //columns
        {
            if(v[i][j]==0) rcnt_0++;
            else if(v[i][j]==1) rcnt_1++;
        }
        if(rcnt_0==3) return 0;
        else if(rcnt_1==3) return 1;
    }
    int c_cnt_0=0,c_cnt_1=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<3;j++)
        {
            if(v[j][i]==0) c_cnt_0++;
            else if(v[j][i]==1) c_cnt_1++;
        }
        if(c_cnt_0==3) return 0;
        else if(c_cnt_1==3) return 1;
    }

    int d_cnt_0=0,d_cnt_1=0;
    for(int i=0;i<3;i++)
    {
        if(v[i][i]==0) d_cnt_0++;
        else if(v[i][i]==1) d_cnt_1++;
    }
    if(d_cnt_0==3) return 0;
    else if(d_cnt_1==3) return 1;

    return -1;
}

int main()
{
    vector<vector<int>> v{{0,1,0},{1,1,0},{0,0,1}};
    cout<<winner(v);
}

