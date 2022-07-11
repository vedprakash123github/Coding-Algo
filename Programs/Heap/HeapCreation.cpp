#include<iostream>
using namespace std;

class Heap
{
    public:
        int arr[100];
        int size;
        Heap()
        {
            arr[0]=-1;
            size=0;
        }

        void swap(int a,int b)
        {
            int temp= a;
            a=b;
            b=temp;
        }

        void insert(int val)
        {
            size=size+1;
            int index=size;
            arr[index]=val;
            while(index>1)
            {
                int parent=index/2;
                if(arr[parent]<arr[index])
                {
                    swap(arr[parent],arr[index]);
                    // int temp=arr[parent];
                    // arr[parent]=arr[index];
                    // arr[index]=temp;
                     index=parent;
                }
                else
                {
                    return;
                }
            }
        }

        void print()
        {
            for(int i=1;i<=size;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main()
{
    Heap h;
    h.insert(10);
    h.insert(30);
    h.insert(5);
    h.insert(55);
    h.insert(67);
    h.insert(34);
    h.print();

}