#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<int> crush(vector<int>& temp1)
    {cout<<"temp1"<<endl;
        for(int i=0;i<temp1.size();i++)
        {
            cout<<temp1[i]<<" ";
        }
        cout<<endl;
       vector<int> res;
       sort(temp1.begin(),temp1.end());
       int n=temp1.size();
        int i=n-1;
        while(i>=0)
        {
            if(i==0 && n%2!=0)
            {
                res.push_back(temp1[0]);
                return res;
            }
             int y=temp1[i],x=temp1[i-1];
            if(x==y)
            {
            i=i-2;
            }
            else
            {
            y=abs(y-x);
            res.push_back(y);
                  i=i-2;
            }
        }
        cout<<"res"<<endl;
        for(int i=0;i<res.size();i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
        return res;
    }
                  
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        if(n==0)
        {
            return 0;
        }
        vector<int> temp1,temp2;
        temp1=stones;
        temp2=crush(temp1);
        while(temp2.size()>1)
        {
        
            temp2=crush(temp2);
        }
        
        if(temp2.size()==0) return 0;
        else if(temp2.size()==1) return temp2[0];
        return 0;
        
    }

    int main()
    {
        vector<int> v{316,157,73,106,771,828,46,212,926,604,600,992,71,51,477,869,425,405,859,924,45,187,283,590,303,66,508,982,464,398};
        lastStoneWeight(v);
    }