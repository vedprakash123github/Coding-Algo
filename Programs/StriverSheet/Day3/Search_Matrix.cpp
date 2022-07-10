#include<iostream>
#include<vector>
using namespace std;

vector<int> search(vector<vector<int>>& v, int target)
{
    int i=0;
     int j=v[0].size()-1;
    while(i<v.size() && j>=0)
    {
       
            if(target==v[i][j])
            {
                return {i,j};
            }
            else if(target>v[i][j])
            {
                i++;
            }
            else
            {
                j--;
            }
    }
    return {-1,-1};
}

int main()
{
    vector<vector<int>> p{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    vector<int> res= search(p,89);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
}

/*for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
       }
    }*/