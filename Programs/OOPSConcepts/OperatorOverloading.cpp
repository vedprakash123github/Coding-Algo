#include<iostream>
using namespace std;

class Base
{
    public:
        int a;
        int b;

        int operator +(Base obj)
        {
            int value1=this->a;
            int value2=obj.a;
            return value1-value2;
        }

        void operator ()()
        {
            cout<<"overloaded bracket operator"<<endl;
        }

      /*  void*  operator new (size_t size)
        {
            cout<< "this is new opearote"<<endl;

        }*/

};
int main()
{
    Base o1;
    o1.a=8;
    Base o2;
    o2.a=12;
    cout<<01+02<<endl;;
    o2();
   // Base* obj= new Base();
    

}



