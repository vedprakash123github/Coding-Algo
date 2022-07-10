#include<iostream>
#include<vector>
using namespace std;

int duplicate(vector<int> v)
{
    int slow=v[0];
    int fast=v[0];
    do{
        slow=v[slow];
        fast=v[v[fast]];
    }while(slow!=fast);
    slow=v[0];
    do{
        slow=v[slow];
        fast=v[fast];
    }while(slow!=fast);
    return v[slow];
}

int main()
{
    vector<int>  v{2,4,1,3,3};
    cout<<duplicate(v);
}