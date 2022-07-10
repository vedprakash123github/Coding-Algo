#include<iostream>
#include<vector>
using namespace std;

//given a linked list rotate the list by right k times and k may be greater than the length of the list.
// Approach:   Since k may be grater than the length of the list first find k mod n so that if k is very large then we need not to rotate the list by large.
// eg. if length n of the list is 4 and k is 10 then in this case we need not to rotate the list by 1o times as the list will be same after 4 rotattions
//so take 10 mod 4(10%4) and it will give 2 so now rotate the list by 2 times.

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
};

node* rotateByOne(node* head)
{
    node* f=head;
    node* b=head;
    while(f->next!=NULL)
    {
        b=f;
        f=f->next;
    }
    f->next=head;
    b->next=NULL;
    head=f;
    return head;
}

node* rotateRight(node* head,int k)
{
    if(head==NULL) return head;
    int length=0;
    node* temp=head;
    while(temp!=NULL)//calculate the length of the list
    {
        temp=temp->next;
        length++;
    }

    int md=k%length; //find k mod n(length of list)

    for(int i=1;i<=md;i++)
    {
        head=rotateByOne(head);// rotate the list everytime by one for md times;
    }
    return head;
}
node* create(vector<int> v)
{
    node* head=new node(v[0]);
    node* temp=head;
    for(int i=1;i<v.size();i++)
    {
        node* temp1=new node(v[i]);
        temp->next=temp1;
        temp=temp1;
    }
    return head;
}

void printList(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main()
{
    vector<int> v{1,2,3,4};
    node* head=create(v);
    for(int i=1;i<=4;i++)
    {
    head=rotateRight(head,1);
    printList(head);
    cout<<endl;
    }
    
}