#include<iostream>
#include<string>
#include<vector>
using namespace std;


 vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord)
    {
       
       vector<vector<string>> res;
        if(products.size()==0) return res;
        if(searchWord.length()==0) return res;
        
        string temp="";
        int flag=0;
        while(temp.length()!=searchWord.length())
        {
            temp= temp+searchWord[flag++];
            for(int i=0;i<products.size();i++) // to iterate over the products array
            {   
                int cnt=0,j,cntr=0;
                string st=products[i];
                for(j=0;j<temp.length();j++)// to iterate over the each word
                {
                    
                    if(st[j]==temp[j])
                    {
                        cnt++;
                    }
                    
                     if(cnt==j && cntr<3)  // to verify if the search word portion matched with the current word                 
                     {
                         cout<<"inside for "<<endl;
                         res[i].push_back(products[i]);
                    }
                }
               
                
            }
        
        }
        cout<<"returned"<<endl;
        return res;
    }

     int main()
     {
        vector<string> products = {"mobile","mouse","moneypot","monitor","mousepad"};
        string searchWord = "mouse";
      // suggestedProducts(products,searchWord);
      const int &x=10;
       cout<<x<<endl;
      
     }