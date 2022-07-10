#include<iostream>
using namespace std;

class A
{
    public: 
    A()
    {
        cout<<"base class consttuctor called"<<endl;
    }
    public:
    void Display()
    {
        cout<<"base class method"<<endl;
    }
    virtual void show()
    {
        cout<<"base calss method"<<endl;
    }
    void fun()
    {
        cout<<"Test method func"<<endl;
    }

};
class B:public A
{
    public:
    B()
    {
        cout<<"Derived class constructor called"<<endl;
    }

    void Display()
    {
        cout<<"Derived class method"<<endl;
    }
    void show()
    {
        cout<<"derived class method"<<endl;
    }
   
    
    
};

int main()
{
    A* obj = new B();
   obj->show();
  /* A a;
   B b;
   A* o=&b;
  // a.Display();
   b.fun();
   //o->fun();
   //o->show();
cout<<&o<<endl;
cout<<o<<endl;
cout<<&a<<endl;*/
}


