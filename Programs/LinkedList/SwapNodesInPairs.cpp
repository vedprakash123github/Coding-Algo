#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

 node* swapPairs(node* head) // Recursive solution
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        node* temp=head->next;
        head->next=swapPairs(temp->next);
        temp->next=head;
        return temp;
    }

    int main()
    {
        node* head=new node(10);
        node* one=new node(20);
        head->next=one;
        node* two=new node(30);
        one->next=two;
        node obj(40);
        node* three=&obj;
        two->next=three;
        node* temp=swapPairs(head);
        while(temp)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }



    }