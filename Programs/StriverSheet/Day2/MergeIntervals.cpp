#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& v)
{
    vector<vector<int>> res;
    sort(v.begin(),v.end());
    int first=v[0][0];
    int second=v[0][1];
    for(int i=1;i<v.size();i++)
    {
        if(second>=v[i][0])
        {
            second=max(second,v[i][1]);
        }
        else
        {
            res.push_back({first,second});
            first=v[i][0];
            second=v[i][1];
        }
    }
    res.push_back({first,second});
    return res;
}
int main()
{
    vector<vector<int>> p={{1,3},{2,6},{8,10}};
    vector<vector<int>> re=merge(p);
    for(int i=0;i<re.size();i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<re[i][j]<<",";
        }
        cout<<endl;
    }
}
