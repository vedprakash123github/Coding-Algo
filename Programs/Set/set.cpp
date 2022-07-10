#include<iostream>
#include<set>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    /*set<int> st,st1;
    vector<int> nums{3,1,4,5};

    for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }

    set<int>::iterator it=st.begin();
   st.erase(it);
   cout<<*it<<endl;
   set<int>::iterator it1=st.begin();
    for(;it1!=st.end();it1++)
    {
        cout<<*it1<<endl;
        
        
    }*/
    //cout<<st.empty();
    stack<int> stck;
    stck.push(3);
    cout<<stck.empty();
}