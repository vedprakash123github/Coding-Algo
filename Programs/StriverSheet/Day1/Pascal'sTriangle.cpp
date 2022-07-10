 #include<iostream>
#include<vector>
using namespace std; 
 
 //In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
 vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pscl(numRows);
        for(int i=0;i<pscl.size();i++)
        {
            pscl[i].resize(i+1);
        }
        for(int i=0;i<pscl.size();i++)
        {
            pscl[i][0]=pscl[i][i]=1;
        }
        for(int i=2;i<pscl.size();i++)
        {
            for(int j=1;j<pscl[i].size()-1;j++)
            {
                pscl[i][j]=pscl[i-1][j-1]+pscl[i-1][j];
            }
        }
        return pscl;
        
    }

    int main()
    {
        vector<vector<int>> res=generate(5);
    }