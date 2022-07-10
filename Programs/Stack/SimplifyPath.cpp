/* Question:   Leetcode:  https://leetcode.com/problems/simplify-path/  
    Given a string path, which is an absolute path (starting with a slash '/') to a file or directory in a Unix-style file system, convert it to the simplified canonical path.

In a Unix-style file system, a period '.' refers to the current directory, a double period '..' refers to the directory up a level, and any multiple consecutive slashes (i.e. '//') are treated as a single slash '/'. For this problem, any other format of periods such as '...' are treated as file/directory names.

The canonical path should have the following format:

The path starts with a single slash '/'.
Any two directories are separated by a single slash '/'.
The path does not end with a trailing '/'.
The path only contains the directories on the path from the root directory to the target file or directory (i.e., no period '.' or double period '..')
Return the simplified canonical path.

 

Example 1:

Input: path = "/home/"
Output: "/home"
Explanation: Note that there is no trailing slash after the last directory name.
Example 2:

Input: path = "/../"
Output: "/"
Explanation: Going one level up from the root directory is a no-op, as the root level is the highest level you can go.
Example 3:

Input: path = "/home//foo/"
Output: "/home/foo"
Explanation: In the canonical path, multiple consecutive slashes are replaced by a single one.
*/



#include<iostream>
#include<stack>
#include<string>
using namespace std;

/*string simplified(string s)
{
    int l=s.length();
    if(l==0) return "";
    stack<string> st;

    for(int i=0;i<l;i++)
    {
        if(s[i]=='/')
        {
            continue;
        }
        string temp;
        while(i<l && s[i]!='/')
        {
            
            temp=temp+s[i];
            ++i;
        }
       
        if(temp==".")
        {
            continue;
        }
        else if(temp=="..")
        {
           if(!st.empty()) st.pop();
        }
        else
        {
            st.push(temp);
            
        }
    }
    string res="";
    while(!st.empty())
    {
        res='/'+st.top()+res;
        st.pop();
    }
    if(res.length()==0) return "/";
    else return res;

}*/

 string simplifyPath(string s) {
        int l=s.length();
        if(l==0)return "";
        stack<string> st;
        for(int i=0;i<l;i++)
        {
            string temp;
            if(s[i]=='/') {continue;}
            
            while((i<l) && (s[i]!='/'))
            {
                temp=temp+s[i];
                i++;
            }
          
            if(temp==".") continue;
            else if(temp=="..")
            {
                
               if(!st.empty()) 
               {
                   
                   st.pop();
               }
            }
            else
            {
                st.push(temp);
            }
        }
        
        string res="";
        do
        {
            string tp;
            if(!st.empty()) tp=st.top();
            res="/"+tp+res;
            if(!st.empty()) st.pop();
        }while(!st.empty());
        return res;
    }

int main()
{
   // string s="/a/./b/../../c/";
    string s="/../";
   // string res=simplified(s);
   string res=simplifyPath(s);
    cout<<res;
}

/*  stack<string> st;
        string res;
        
        for(int i = 0;  i<path.size(); ++i)
        {
            if(path[i] == '/')    
                continue;
            string temp;
			// iterate till we doesn't traverse the whole string and doesn't encounter the last /
            while(i < path.size() && path[i] != '/')
            {
                
                temp += path[i];
                ++i;
            }
            if(temp == ".")
                continue;
			// pop the top element from stack if exists
             if(temp == "..")
            {
                if(!st.empty())
                    st.pop();
            }
            else
			// push the directory file name to stack
                st.push(temp);
        }
        
		// adding all the stack elements to res
        while(!st.empty())
        {
            res = "/" + st.top() + res;
            st.pop();
        }
        
		// if no directory or file is present
        if(res.size() == 0)
            return "/";
        
        return res;*/