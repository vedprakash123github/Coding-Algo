#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    bitset<10> a;
    a=10;
    cout<<a<<endl;
    bitset<10> b;
    b=10;
    cout<<b<<endl;
    for(int i=0;i<10;i++)
    {
        if(a[i] && b[i])
        {
            cout<<i<<" : "<<a[i]<<" => "<<b[i]<<endl;
        }
    }

}
