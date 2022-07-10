#include<iostream>
using namespace std;

class A{
protected: 
 string name="ved";
 int accno=9000;
 void display()
 {
     cout<<name<<": "<<accno<<endl;
 }
};
class B:public A
{
    public:
    int ac=accno;

};
int main()
{
    B obj;
    //obj.name="atul";
    cout<<obj.ac;
    A obj1;
    
}