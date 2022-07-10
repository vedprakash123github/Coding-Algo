#include<iostream>
using namespace std;

class Heap
{
    public:
        int arr[100];
        int size;
        Heap()
        {
            size=0;
        }

        void insert(int val)
        {
            int index=size+1;
            arr[index]=val;
            while(index>1)
            {
                int parent=index/2;
                if(arr[parent]<arr[index])
                {
                    swap(arr[parent],arr[index]);
                    index=parent;
                }
                else
                {
                    return;
                }
            }
        }
};