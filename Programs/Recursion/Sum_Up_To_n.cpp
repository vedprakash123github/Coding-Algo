#include<iostream>
using namespace std;

void RecSum(int i,int sum)
{
    if(i<1)
    {
        cout<<sum<<endl;
        return;
    }
    RecSum(i-1,sum+i);
}

int main()
{
    int sum=0;
    RecSum(3,sum);
    
}