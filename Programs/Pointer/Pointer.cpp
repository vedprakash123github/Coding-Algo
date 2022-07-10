#include<iostream>
using namespace std;

int main()
{
    int* ptr=new int(4); //heap memory created
    cout<<*ptr<<" :"<<ptr<<endl; //value and address of the memory;
    delete ptr;  //deleting the memory allocated by new;
    cout<<*ptr<<" : "<<ptr<<endl;  //value and address of the memory after delete
    ptr=NULL; //pointer pointer to null now.
    cout<<ptr<<endl;



    /*for(int i=1;i<=k;i++)
       {
        ListNode* frwd=head;
        ListNode* bck=head;
        while(frwd && frwd->next!=NULL)
        {
            bck=frwd;
            frwd=frwd->next;
        }
           frwd->next=head;
            bck->next=NULL;
            head=frwd;
       }
        return head;*/

}