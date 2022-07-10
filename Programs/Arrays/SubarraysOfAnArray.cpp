#include<iostream>
#include<vector>
using namespace std;

// void SubArr(vector<int>& v)
// {
//     for(int i=0;i<v.size();i++)
//     {
//         for(int j=i;j<v.size();j++)
//         {
//             for(int k=i;k<=j;k++)
//             {
//                 cout<<v[k]<<" ";
//             }
//             cout<<endl;
//         }
        
        
//     }

// }

// void VedSub(vector<int>& v)
// {
    
//     for(int i=0;i<v.size();i++)
//     {
//         for(int j=i;j<v.size();j++)
//         {
//             for(int k=i;k<=j;k++)
//             {
//                 cout<<v[k];
//             }
//             cout<<endl;
//         }
//     }
// }

int x=8;
void A()
{
    int y=7;
    auto B=[]()
    {
        cout<<x<<endl;
    };
    B();
}

int main()
{
    // vector<int> p{1,2,3,4};
    // SubArr(p)
    A();
}