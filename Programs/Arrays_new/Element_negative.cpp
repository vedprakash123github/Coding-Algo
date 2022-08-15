#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> negativeElement(vector<int> v,int k)
{
    vector<int> ans;
    queue<int> q;
    int i=0,j=0;
    //1,2,30,4,-565,45
    while(j<v.size())
    {
        if(v[j]<0)
        {
            q.push(v[j]);
        }

        if(j-i+1<k){ j++;}
        if(j-i+1==k){
            if(q.empty())
            { ans.push_back(0);
                i++;
                j++;
            }
            else{
                int tp=q.front();
                ans.push_back(tp);
                if(v[i]==q.front()) q.pop();
                i++;
                j++;
            }
        }
     }
     return ans;
}

int main()
{
    vector<int> v{1,2,30,4,-565,45};
    int k=3;
    vector<int> ans= negativeElement(v,k);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}