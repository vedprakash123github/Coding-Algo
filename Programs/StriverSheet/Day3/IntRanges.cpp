#include<iostream>
#include<limits>
using namespace std;


    double pow(double x, int n)
     {
       long long int nn=n;
        if(n<0)
        {
            nn= (-1)*n;
        }
        double ans=1;
        
        while(nn)
        {
            if(nn%2)
            {
                ans=ans*x;
                nn=nn-1;
            }
            else
            {
                x=x*x;
                nn=nn/2;
            }
        }
        if(n<0)
        {
            ans=(double)1/ans;
        }
        return ans;

    }

int main()
{
    //cout<<numeric_limits< int >::max()<<endl;
    //cout<<numeric_limits< long >::max()<<endl;
    cout<<pow(2,-2147483648);
     
        
}