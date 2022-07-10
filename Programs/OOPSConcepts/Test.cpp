#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<unordered_set>
using namespace std;
/*class point
{
    private:
        double x,y;
    public:
        point(double px,double py)
        {
            x=px, y=py;
        }
};
*/

/*int main()
{
    int var1=10;
    char var2='d';
    var1=var1+var2;
    float var3=var1+7.0;
    cout<<var1<<endl<<var3;
    int x=11010110;
    int y=01011010;
    x<<3;
    cout<<x;
    
} 
*/



string IntToString(vector<int>& num)
{
    int n=num.size();
    string d="_";
    string res="";
    for(int i=0;i<num.size();i++)
    {
        if(i==n-1)
        {
            res=res+to_string(num[i]);
        }
        else
        {
        res=res+(to_string(num[i])+d);
        }
        //res=s.append(d);

    }
    return res;
}

vector<int> StringToInt(string str)
{
    stringstream ss;
    ss<<str;
    vector<int> v;
    int n;
    while(ss>>n)
    {
        if (ss.peek() == '_')
        {
        ss.ignore();}
        v.push_back(n);
    }
    return v;
}


int main()
{
        //string st="123987";
       /* unordered_set<string> st;
        vector<int> v1{-1, -3, 4};
        vector<int> v2{-1 ,4 ,-3 };
        string s1=IntToString(v1);
        string s2=IntToString(v2);
        st.insert(s1);
        st.insert(s2);
        for(auto x:st)
        {
            vector<int> res=StringToInt(x);
            for(int i=0;i<res.size();i++)
            {
            cout<<res[i]<<endl;
            }
            cout<<"vector 2 : "<<endl;
        }*/

        
       
}