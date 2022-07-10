#include <iostream>
#include <sstream>
#include <string>
using namespace std; 
   
int main() 
{ 
    string str = " 12 23 45"; 
     
    stringstream s(str);  
    string word; 
   int ans;
   int sum=0;
    int count = 0; 
    while (s >> ans) 
        //sum=sum+ans;
        cout<<ans;
        
         
    //cout<<sum; 
    return 0; 
}