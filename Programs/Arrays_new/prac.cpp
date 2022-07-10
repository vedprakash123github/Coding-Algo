#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

class A{
    public:
        int main(int i)
    {
        cout<<i<<endl;
        return 0;
    }

};


int main()
{

    //C obj;
    //B obj1;
    //obj.show();
   // obj1.show(5);
    // vector<int> nums{1,3,4,2,2};
    // unordered_map<int,int> mp;
    // for(int i=0;i<nums.size();i++)
    //     {
    //         mp[nums[i]]++;
    //     }
    // for(auto it=mp.begin();it!=mp.end();it++)
    // {
    //     cout<<it->first<<" :"<<it->second<<endl;
    // }

//     int n=861524;
//     vector<int> v;
//     while(n)
//     {
//         v.push_back(n%10);
//         n=n/10;
//     }
//     reverse(v.begin(),v.end());
   
//     int max=INT_MIN;
//     int index=-1;
//     int l=-1,r=-1;
//     for(int j=v.size()-1;j>=0;j--)
//     {
//         if(v[j]>max)  //look for the largest number so far. Once you get the current number smaller than the largest so fat then continue with nexr iteration; 
//         {
//             max=v[j] ;
//             index=j;
//             continue;
//         }
//         if(max>v[j]) //check if the current element is smallerr than the largest so far. If it is smaller than store it's index and the largest so far index.
//         {
//             l=j;
//             r=index;
//         }
//     }
   
//    int temp =v[l];
//    v[l]=v[r];
//    v[r]=temp;
//     cout<<endl;
//     for(int i:v)
//     {
//         cout<<i<<" ";
//     }

// vector<int> v{10,20,30};
// //vector<int,int>::iterator it=v.begin();
// //string v="vedprakash";
// v.erase(v.begin()+1);
// v.insert(v.begin()+1,3,20);
// for(auto it:v)
// {
//     cout<<it<<endl;
// }
cout<<"inside main"<<endl;
A obj;
obj.main(3);
return 0;

}



