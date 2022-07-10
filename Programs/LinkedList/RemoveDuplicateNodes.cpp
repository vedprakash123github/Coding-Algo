#include<iostream>
#include<vector>
using namespace std;

class node
{
    public:
    int val;
    node* next;

    node(int x)
    {
        val=x;
        next=NULL;
    }
}*head=NULL;

void create(vector<int> v)
{
    node* temp=new node(v[0]);
    head=temp;
    for(int i=1;i<v.size();i++)
    {
        node* temp1=new node(v[i]);
        temp->next=temp1;
        temp=temp1;
    }
}

node* deleteDuplicates(node* head) {
       
        node* temp=NULL;
        if(head==NULL)
       {
           return temp;
       }
        temp=head;
        node* back=temp;
        while(temp->next!=NULL)
        {
            if(temp->val==temp->next->val && temp!=NULL)
            {
                if(temp==head)
                {
                    while(temp->val==temp->next->val && temp->next!=NULL)
                    {
                        temp=temp->next;
                    }
                    head=temp->next;
                    back=temp->next;
                    temp=temp->next;
                }
                else
                {
                   while(temp->val==temp->next->val && temp->next!=NULL)
                    {
                        temp=temp->next;
                    }
                     if(temp->next==NULL)
                     {
                        back->next=NULL;
                        temp=back;
                     }
                    else
                    {
                     back->next=temp->next;
                     temp=temp->next;
                    }
                }
            }
            
            else
            {
                 back=temp;
                 temp=temp->next;
            }
        }
        return head;
    }


//recursive and optimised approach

node* delDuplicate(node* head)
{
    if(!head || !head->next) //check if list is empty or just having single. this is also acting as base case for recusion.
    {
        return head;
    }
    int x=head->val;
    int y=head->next->val;
    if(x!=y)//if the adjacent nodes are not having the same/duplicate values
    {
        head->next=delDuplicate(head->next);
    }
    else{ // if the adjacent nodes are having duplicate values.
        while(head && x==head->val) //check if the head is not null and the value of x and the current node pointed by head are same.
        {
            head=head->next;
        }
        return delDuplicate(head); // call the method again after elimating the duplicate nodes.
    }
    return head;
}

int main()
{
    vector<int> v{1,1,2};
    create(v);
   node* res= delDuplicate(head);
   while(res!=NULL)
   {
       cout<<res->val<<endl;
       res=res->next;
   }

}