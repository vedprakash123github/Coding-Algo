#include<iostream>
#include<string>
using namespace std;

bool pallindrome(string s)
{
        cout<<s<<endl;
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-1-i])
            {
                return false;
            }
        }
        return true;
}
    
    bool validPalindrome(string s) 
    {
        int n=s.size();
       for(int i=0;i<n/2;i++)
       {
           cout<<i<<" ";
           if(s[i]!=s[n-1-i])
           {
               //cout<<"inside if"<<endl;
               string s1=s.replace(i,1,"");
               if(pallindrome(s1)) return true;
               else
               {
                   string s2=s.replace(n-1-i,1,"");
                   return pallindrome(s2);
               }
           }
       }
        return true;
    }

int main()
{
    string s="eddze";
    cout<<validPalindrome(s);

}