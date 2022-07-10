#include<iostream>
using namespace std;

int main()
{
    enum er{RED,BLUE=45,GREEN};
    er obj=GREEN;
    cout<<obj;
}