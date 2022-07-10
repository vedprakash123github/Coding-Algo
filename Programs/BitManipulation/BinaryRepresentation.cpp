#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


/*vector<int> binaryRep(int n)
{
        if(n==0) 
        {
            vector<int> r(1,0);
            return r;
        }
        vector<int> v;
        while(n!=0)
        {
        int b=n%2;
        v.push_back(b);
        n=n/2;
        
         }
        reverse(v.begin(),v.end());
        return  v;
}
    int countOne(vector<int> vt)
    {
        int count=0;
        for(int i=0;i<vt.size();i++)
        {
            if(vt[i]==1) 
            {
                count++;
            }
        }
        return count;
    }*/

    int cntBinary(int n)
    {
        if(n==0)
        {
            return 0;
        }
        int count=0;
        while(n!=0)
        {
            int b=n%2;
            if(b==1)
            {
                count++;
            }
            n=n/2;
        }
        return count;

    }
    vector<int> countBits(int n) 
    {
        vector<int> res;
        for(int i=0;i<=n;i++)
        {
           // vector<int> bbit=binaryRep(i);
            //int cntOne=countOne(bbit);
            int c=cntBinary(i);
            res.push_back(c);
        }
        return res;
    }
    /* vector<int> countBits(int n) 
    {
    
     vector<int> ans;
		
        for(int i = 0; i<=n; i++)
        {
			
            int sum = 0;
            int num = i;
			
            while(num != 0)
            {
				
                sum += num%2;
                num = num/2;
            }
			
            ans.push_back(sum);
        }
        return ans;
     }*/

int main()
{
    int n=7;
   /* vector<int> v=countBits(n);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }*/
    cout<<cntBinary(n);
    
}