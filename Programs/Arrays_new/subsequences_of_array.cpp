#include<iostream>
#include<vector>
using namespace std;

//to find the number of subsequences we will use the approach of take and not take;

void sub(vector<int>& v1, vector<int>& v2, int index)
{

    if(index==v1.size())
    {
        int num=0;
        for(int i=0;i<v2.size();i++)
        {
            if(v2[i]<=9) 
            {
                num=10*num+v2[i];
            }
            else
            {
                
            }
            cout<<v2[i]<<" ";
        }
        cout<<endl;
        cout<<"num is : "<<num<<endl;
        if(num%9==0)
         {
             cout<<"sum of the sequence is : "<<9<<endl;
        }
        else
        {
            cout<<"sum of the sequence is : "<<num%9<<endl;
        }
        return;
    }
   
   
    v2.push_back(v1[index]); //add the current element to the data structure
    
    sub(v1,v2,index+1); //call the next index;
    v2.pop_back(); //pop back the inserted element so that we may go ahead for further subsequences without the current index element;
    sub(v1,v2,index+1); // call the function again with next index;
}

int main()
{
    vector<int> v1{9,8,6,10};
    vector<int> v2;
    sub(v1,v2,0);
}