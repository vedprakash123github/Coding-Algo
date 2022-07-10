#include<iostream>
using namespace std;

class A
{
    public:
        int x=10;
        int y=11;
    public:
    void show()
    {
        cout<<x<<endl;
    }
    
};

class B: protected A
{
    public:
     
    void present()
    {
        x=x+12;
        cout<<x<<endl;
    }
};

int main()
{
    B obj;
    obj.present();
    //cout<<obj.y;
}