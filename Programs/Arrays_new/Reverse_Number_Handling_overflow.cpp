#include<iostream>
using namespace std;

//There will be two cases in this question:
//Case 1: The input number entered is already overflowing, suppose we input a number which is out of range of the data type of the variable.
//in this case some garbage number will be passed to the function and it will produce some unexpected result. In this case the overflow will not be handled.
//Case 2: The input number is in the range but after reversing or during reversing it is becoming out of range. In this case the overflow willbe handled.
long long int reverseNum(long long int n)
{
    cout<<n<<endl;
    bool flag=false;
    if(n<0)
    {
        flag=true;
        n=-n;
    }
    long long int prev_rev_num=0,rev_num=0,curr_digit=0;
    while(n>0)
    {
        curr_digit=n%10; 
        rev_num=rev_num*10+curr_digit;
        cout<<rev_num<<endl;
        if((rev_num-curr_digit)/10!=prev_rev_num) //check if the previous number obtained from curr number is not equal.
        {
            cout<<"number overflowed"<<endl;
            return 0;
        }
        prev_rev_num=rev_num;
        n=n/10;
    }
    return (flag==true)?-rev_num:rev_num;
}

int main()
{
    long long int n;
    cin>>n;
    cout<<reverseNum(n);
}