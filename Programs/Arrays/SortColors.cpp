#include<iostream>
#include<vector>
using namespace std;

void color(vector<int>& p)
{
    int zero=0,one=0,two=0;
    for(int i=0;i<p.size();i++)
    {
        if(p[i]==0)
        {
            zero++;
        }
        if(p[i]==1)
        {
            one++;
        }
        if(p[i]==2)
        {
            two++;
        }
    }
    for(int j=0;j<p.size();j++)
    {
        if(zero)
        {
            p[j]=0;
            zero--;
            continue;
        }
        if(one)
        {
            p[j]=1;
            one--;
            continue;
        }
        if(two)
        {
            p[j]=2;
            two--;
            continue;
        }
    }
}
int main()
{
    vector<int> v{0,1,0,2,0,1,2};
    color(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}