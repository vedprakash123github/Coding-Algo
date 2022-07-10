#include<iostream>
using namespace std;

class Base
{
    public: 
     virtual void display()
     {
         cout<<"base class method"<<endl;
     }

     void baseshow()
     {
         cout<<"show method base class"<<endl;
     }
};

class Derived: public Base
{

public:

    void display()
    {
        cout<<"derived class method"<<endl;
    }

    void baseshow()
    {
        cout<<"derived baseshow method"<<endl;
    }
};

int main()
{
    Base* obj;
    Derived dobj;
    obj=&dobj;
    obj->display();
    obj->baseshow();


    /*Explanation: Runtime polymorphism is achieved only through a pointer (or reference) of base class type. Also, a base class pointer can point to the objects of base class as well as to the objects of derived class. In above code, base class pointer ‘bptr’ contains the address of object ‘d’ of derived class.
Late binding (Runtime) is done in accordance with the content of pointer (i.e. location pointed to by pointer) and Early binding (Compile time) is done according to the type of pointer, since print() function is declared with virtual keyword so it will be bound at runtime (output is print derived class as pointer is pointing to object of derived class) and show() is non-virtual so it will be bound during compile time (output is show base class as pointer is of base type).
NOTE: If we have created a virtual function in the base class and it is being overridden in the derived class then we don’t need virtual keyword in the derived class, functions are automatically considered as virtual functions in the derived class.
*/

}