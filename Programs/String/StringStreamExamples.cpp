#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

void stringDeclaration()
{
    string obj="string object declaration";
    string s("stringvariable"); //string declaration examples;
    //string s2(s);
    //string s3(s.begin(),s.begin()+5);
    //string s3(s,0,5);
    //cout<<"third string variable: "<<s3<<endl;
    string ct=obj+" "+s;
    cout<<ct<<endl;
}
void stringStreamDeclaration(string str)
{

    stringstream ss;
    ss<<str;
    unordered_map<string,int> mp;
    //vector<string> v;
    string n;
    while(ss>>n)
    {
      /* if (ss.peek() == ' ')
        {
        ss.ignore();
        }*/
        //v.push_back(n);
        mp[n]++;
    }
    for(auto x:mp)
    {
        cout<<x.first<<": "<<x.second<<endl;
    }

   // return v;

  
    /*int nInt = 2019;
    double nDouble = 3.142;
    string s1="123";
    string s2="987";
    //ss << nInt << " " << nDouble;
    ss<<s1<<s2;
    int y;
    ss>>y;
    cout<<"string value convereted to int : "<<y;*/
    
   /* string myStr1, myStr2;
    ss >> myStr1 >> myStr2;

    cout<<"The numeric values converted to string:"<<endl;
    cout << "myStr1 = "<<myStr1 << " " << "myStr2 = "<<myStr2 << endl;*/

}

int main()
{
   // stringDeclaration();
   string s="geeks for geeks";
    //vector<string> res =
    // stringStreamDeclaration(s);
    /*for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }*/
    string str="vedprakash";
    int pos=str.find('a');
    cout<<str.substr(pos+1);

}