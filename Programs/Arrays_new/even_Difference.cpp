//sort the subsequence in ascending order
//determine the sum of differences of elements in the subsequence
//return the length of longest subsequence where this sum is even

//2,4,1,7

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int fun(vector<int> v){
  sort(v.begin(), v.end());
  int n = v.size();
  int mn0 = n+1;
  int mx0 = -1;
  int mn1 = n+1;
  int mx1 = -1;
  
  for(int i=0;i<n;i++){
    if(v[i] % 2 ==0){
      mn0 = min(mn0, i+1);
      mx0 = max(mx0, i+1);
    }
    else{
      mn1 = min(mn1, i+1);
      mx1 = max(mx1, i+1);
    }
  }
  //cout<<"mx1 : "<<mx1<<" mn1 : "<<mn1<<" mx0 : "<<mx0<<" mn0 : "<<mn0<<" mx1-mn1+1 : "<<mx1-mn1+1<<endl;
  return max(mx1-mn1+1, mx0-mn0+1);
}

int main()
{
  vector<int> v{2,4,1,7};
  cout<<fun(v);
}