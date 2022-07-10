#include<iostream>
//#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    /*unordered_map<string,int> mp;
    mp["val"]=1;
    mp["ral"]=2;*/

    int x=1211;
    int num=x;
    vector<int> v(10,0);
    while(num)
    {
        int d=num%10;
        v[d]++;
        num=num/10;
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2 == 0 || v[i]==1)
        {
            cout<<"not pallindrome"<<endl;
            break;
        }
        else
        {
            cout<<"pallindrome"<<endl;
        }
        //cout<<v[i]<<endl;
    }
    

}