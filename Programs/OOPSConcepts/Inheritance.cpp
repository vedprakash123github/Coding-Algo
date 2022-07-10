#include<iostream>
using namespace std;

class Human
{
    protected:
        int height=8;
   private:
        string name="HomoSapines";

    public:
        void getName()
        {
            cout<<name;
        }
    protected:
        void getHeight()
        {
            cout<<height<<endl;
        }

};

class Male :public Human
{
    private:
        string color;
    public:
        void getColor()
        {
            getName();
        }
    public:
        int g=height;
};
class child: public Male
{
    public:
        int var=5;
        int c=height;

};

int main()
{
    child m;
    cout<<m.c;
    
    
     
}

