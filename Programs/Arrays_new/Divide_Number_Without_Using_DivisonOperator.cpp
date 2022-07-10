#include<iostream>
using namespace std;

 int divide(int dividend, int divisor) {
        int flag=0,signal=0;
         if(divisor==1 || divisor==-1)
        {
            if(divisor==-1 && dividend<0) return dividend;
            else if(divisor==-1 && dividend>0) return -dividend;
            else if(divisor==1 && dividend<0) return dividend;
            else return dividend;
        }
        cout<<"after first if"<<endl;
        if(divisor<0 && dividend>=0)
        {
           divisor= abs(divisor);
            
            flag=1;
        }
        else if(dividend<0 && divisor>=0)
        {
             dividend=abs(dividend);
            flag=1;
        }
        else if(divisor<0 && dividend<0)
        {
            divisor= abs(divisor);
            dividend=abs(dividend);
            signal=1;
        }
        int cnt=0;
       
            
        
        while(dividend>=divisor)
        {
            dividend=dividend-divisor;
            cnt++;
            
        }
        int res=int(cnt);
        if(signal) return res;
        if(flag) return -res;
        return res;
    }

    int main()
    {
      //cout<<divide(-1,1)<<endl;
      int dividend=-1;
      int divisor=-1;
      bool flag=(dividend >= 0) == (divisor>=0)?true:false;
      cout<<flag<<endl;
    }