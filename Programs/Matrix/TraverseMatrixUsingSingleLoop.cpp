#include<iostream>
#include<vector>
using namespace std;

void matrixTrav(vector<vector<int>> v)
{
    int r=v.size();
    int c=v[0].size();
    int i=0;
    while(i<r*c)
    {
        int row=i/c;
        int col=i%c;
        i++;
        cout<<v[row][col]<<" ";
    }

}

int main()
{
    vector<vector<int>> v{{1,2,3},{4,5,6},{7,8,9}};
    matrixTrav(v);
}