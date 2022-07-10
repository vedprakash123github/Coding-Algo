#include<iostream>
using namespace std;

class A
{
    public:

    int x;
    int y;
    A(int d)
    {
        x=d;
    }
    A(const A& ob)
    {
        x=ob.x;
    }
};
int main()
{
    A obj(354);
    A obj2(obj);
    cout<<obj2.x;
    cout<<obj.x;
}