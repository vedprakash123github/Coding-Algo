#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

node* create(vector<int> v)
{
    node* head=new node(v[0]);
    node* temp=head;

    for(int i=1;i<v.size();i++)
    {
        node* newNode=new node(v[i]);
        temp->next=newNode;
        temp=newNode;
    }
    return head;

}

int lastNode(node* head,int n)
{
    node* fast=head, *slow=head;
    while(n!=0)
    {
        fast=fast->next;
        n--;
    }
    while(fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow->data;


}

int main()
{
    vector<int> v{10,20,30,40,50};
    node* head=create(v);
    // while(head)
    // {
    //     cout<<head->data<<endl;
    //     head=head->next;
    // }

    int res=lastNode(head,3);
    cout<<res<<endl;

}