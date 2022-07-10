#include<iostream>
using namespace std;

class A{
    public: 
        void display()
        {
            cout<<"this is display method of parent class"<<endl;
        }
        void display(string s)
        {
            cout<<s<<endl;
        }
        virtual void show()
        {
            cout<<"this is show method of parent class"<<endl;
        }
};

class B:public A
{
    void  display()
    {
        cout<<"this is derived class display method"<<endl;
    }
    void show()
    {
        cout<<"this is derived class show method"<<endl;
    }
};

int main()
{
    A* obj=new B();
   
    obj->display("hello");
    obj->show();
}