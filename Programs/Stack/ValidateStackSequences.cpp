#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

bool validateSeq(vector<int>& pushed, vector<int>& popped)
{
    if(pushed.size()==0 || popped.size()==0) return false;
    stack<int> st;
    int j=0;
    for(int i=0;i<pushed.size();i++)
    {
        st.push(pushed[i]);
        while(!st.empty() && st.top()==popped[j])
        {
            st.pop();
            j++;
        }
    }
    return st.empty();
}

int main()
{
    vector<int> pushed{1,2,3,4,5};
    vector<int> popped{4,3,5,2};
    cout<<validateSeq(pushed,popped);
}