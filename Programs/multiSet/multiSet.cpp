#include<iostream>
#include<set>
#include<iterator>
#include<vector>
using namespace std;

int main()
{
    multiset<int> m;
    vector<int> v{10,3,2,56,23};
    for(int i=0;i<v.size();i++)
    {
        m.insert(v[i]);
    }
    
    multiset<int>::iterator it=m.begin();
    auto pos=m.find(3);
    m.erase(pos);
   
    for(;it!=m.end();it++)
    {
        cout<<*it<<endl;
    }

}