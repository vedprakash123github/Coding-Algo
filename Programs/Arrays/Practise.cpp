#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

/*void fun(vector<int>* vt)
{
    for(int i=0;i<vt->size();i++)
    {
        cout<<(*vt)[i]<<endl;
        cout<<"addresses : "<<vt+i<<endl;
       // cout<<vt->at(i)<<endl;
    }
}*/


int main()
{
    int arr[5]={29,21,21,21,21};
    unordered_map<int,int> mp;
    for(auto x:arr)
    {
        mp[x]++;
    }
    for(auto y:mp)
    {
        if(y.second>1)
        {
            cout<<y.first<<endl;
        }
    }
    
    
   
    
   /* for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }*/




   /* vector<int> v{10,3,5,2,1};
    //fun(&v);
    for(int i=0;i<v.size();i++)
    {
       
       // cout<<&v[i]<<endl<<endl;
        cout<<&(v[i])<<" "<<&v[i]<<" "<<&v+i<<" "<<&(*v)<<endl;
      // cout<<"v addresses : "<<&v+i<<endl;

       
    }*/
    
   
}