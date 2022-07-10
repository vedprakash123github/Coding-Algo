#include<iostream>
#include<vector>
using namespace std;

int digitRoot(int n) //imp theorem to find the digit sum;
{
    if(n==0 ) return 0;
    if(n%9==0) return 9;
    else return n%9;
}

int main()
{
    int n=73;
    //n=53;
//     int digit=0;
//     int sum=0;
//     while(n>0 || sum>9)
//     {
        
//          if(n==0)
//         {
//             n=sum;
//             sum=0;
//         }
//         digit=n%10;
//         sum=sum+digit;
//         n=n/10;
        
//     }
//     cout<<sum<<endl;
cout<<digitRoot(29)<<endl;
 }