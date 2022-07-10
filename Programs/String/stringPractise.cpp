#include<iostream>
#include<vector>
using namespace std;
// class A{
//     public:
//         // A(int y)
//         // {
//         //     cout<<y<<endl;
//         // }
//         int x=10;
// };

// string interpret(string command)
//  {
//         string res;
//         for(int i=0;i<command.size();i++)
//         {
//             if(command[i]=="()"){
//                 res=res+"o";
//             }else if(command[i]=="(al)")
//             {
//                 res=res+"al";
//             }else
//             {
//                 res=res+"G";
//             }
//         }
//         return res;
    //}


int main()
{
//     string name="vedprakash";
//    //char s[]="vedprakash";
//    string name1="pra";
//    int i=name.find(name1);
//    string subst=name.substr(3);
//    name.append(" sharma");
//    //name.replace(0,8,"ashutosh");
//    //name.erase(0,3);
//    if(i==string::npos)
//    {
//    cout<<i<<endl;
//    }
//    else{
//        cout<<"found"<<endl;
//    }
//    cout<<subst<<endl;
//    cout<<name<<endl;
//  string x="ved";
// x="dev";
// cout<<x<<endl;
// string st="vedprakash sharma";
// cout<<st.length()<<endl;
// cout<<st.capacity()<<endl;
// st.shrink_to_fit();
// cout<<st.capacity()<<endl;
// cout<<st.length()<<endl;
// vector<int> v(26,0);
// string s="test string";
// for(int i=0;i<s.size();i++)
// {
//     v[s[i]-'a']++;
// }
// int cnt=0;
// for(int j=0;j<26;j++)
// {
//     if(v[j]>1)cnt++;
//     cout<<v[j]<<endl;
// }
// cout<<"count : "<<cnt<<endl;
// char s[]="vedprakash";
// char *p=s;
// cout<<&s<<endl;
// cout<<&s<<endl;

// int arr[]={1,2,3,4,5};
// cout<<arr<<endl;

// int x=10;
// int *ptr=&x;
// cout<<ptr<<endl;

    //cout<<interpret("G()(al)");
    // string s="ved";
    // string t="sfd";
    // for(int i=0;i<s.size();i++)
    // {
    //     if(s.find(t[i])!=string::npos)
    //     {
    //         cout<<t[i]<<endl;
    //     }
    // }
    //cout<<&s[0]<<endl;
    // string x="Atul";
    // string* ptr=&x;
    // cout<<&ptr<<endl;
    // cout<<&x<<endl;

    // A obj;
    // cout<<obj;
    

   int arr[5]={10,20,30,40,50};
   int* ptr=arr;
   cout<<"value stored in arr : "<<arr<<endl;
   cout<<"values stored in &arr : "<<&arr<<endl;
   cout<<"value stored in ptr : "<<ptr<<endl;
   cout<<"value stored in *ptr : "<<ptr[0]<<endl;
//    int x=5;
//    int &y=x;
//    cout<<&x<<endl;
//    cout<<&y<<endl;
}
