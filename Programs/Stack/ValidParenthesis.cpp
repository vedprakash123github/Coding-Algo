#include<iostream>
#include<stack>
using namespace std;


bool validParen(string s)
{
    
    if(s.length()==0) return true;
    stack<char> st;
    int i=0;
    
    while(i<s.length())
    {
        cout<<"entering while : "<<i<<endl;
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
            i++;
        }
        else if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            
            if(i==5)
            {
                cout<<"value in "<<i<<" : "<<s[i]<<endl;
                cout<<"state of stack at i= "<<i<<endl;
                if(!st.empty())
                {
                    cout<<" stack is not empty"<<endl;
                    char c=st.top();
                    cout<<c<<endl;
                }
            }
            if(st.empty()) return false;
           
            else if((s[i]==')' && st.top()=='(' )|| (s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='['))
            {
               
                st.pop();
                i++;
            }
            else
            {
                return false;
            }
        }
     
        
    }
    
    if(st.empty()) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return st.empty();

}

int main()
{
    string s="()[]{}";
    validParen(s);
}

