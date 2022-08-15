#include<iostream>
using namespace std;

class Heap
{
    public:
        int arr[100];
        int arr1[10];
        int size,i=0;
      
        Heap()
        {
            arr[0]=-1;
            size=0;
        }

        void swap(int& a,int& b)
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
                if(arr[parent]<arr[index] && parent>0)
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

        void Deletion()
        {
            if(size==0) 
            {   
                cout<<"nothing to delete "<<endl;
                return;
            }
           
            arr[1]=arr[size];
            size=size-1;
            int index=1;
            while(index<size)
            {
                int l=2*index;
                int r=2*index+1;
                if(arr[index]<arr[l] || arr[index]<arr[r] && l<=size && r<=size)
                {
                    if(arr[l]>arr[r])
                    {
                    swap(arr[index],arr[l]);
                    index=l;
                    }
                    else
                    {
                    swap(arr[index],arr[r]);
                    index=r;
                    } 
                }
                else
                {
                    return;
                }
            }
           // print();
        }

        //67 55 34 10 30 5 
        void heapSort()
        {
            int cntr=size;
             int temp=size,val;
           // int i=1;
            while(cntr!=0)
            {  //cout<<cntr<<endl;
                // arr1[i++]=arr[1];
               // cout<<arr[1]<<endl;
                val=arr[1];

                Deletion();
                arr[temp]=val;
                // cout<<"temp "<<temp<<" : "<<val<<endl;
            //    // cout<<"size in heap sort "<<size<<endl;
                temp=size;
                cntr--;

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

         void printSorted()
        {
            for(int i=1;i<=6;i++)
            {
                cout<<arr1[i]<<" ";
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
   int i=1;
    //cout<<h.size;
  while(i<=6)
  {
    h.Deletion();
    h.print();
    i++;
  }
}