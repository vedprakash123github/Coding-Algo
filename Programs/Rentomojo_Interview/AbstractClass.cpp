#include<iostream>
using namespace std;

//abstract class
class A{
    public:
    virtual void display()=0; //this is pure virtual method
    virtual void show() //this is virtual method
    {
        cout<<"thjis is show method"<<endl;
    }
};

class B: public A
{
    public :

    void display()
    {
        cout<<"display method of derived class"<<endl;
    }
        void show() //derived class overriding the parent class virtual method.
        {
            cout<<"this is show method of derived  class"<<endl;
        }
};

int main()
{
   //A obj;  //can not instanciate abstract class.
   //obj.show();
    B obj1;
    obj1.show();
}