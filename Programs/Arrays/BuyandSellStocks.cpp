#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int sell(vector<int>& v)
{
    int buy=INT_MAX;
    int profit=0;
    for(int i=0;i<v.size();i++)
    {
        buy=min(buy,v[i]);
        profit=max(profit,v[i]-buy);
    }
    return profit;
}

int main()
{
    vector<int> p{7,1,5,3,6,4};
    cout<<sell(p);
}