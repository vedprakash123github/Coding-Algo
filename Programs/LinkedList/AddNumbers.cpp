#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class node
{
    public:
    int val;
    node* next;

    node()
    {
        val=0;
        next=NULL;
    }

    node(int x)
    {
        val=x;
        next=NULL;
    }
}*head=NULL;

node* create(vector<int> v)
{
    node* temp=new node(v[0]);
    head=temp;
    for(int i=1;i<v.size();i++)
    {
        node* temp1=new node(v[i]);
        temp->next=temp1;
        temp=temp1;
    }
    return head;
}

node* addTwoNumbers(node* l1, node* l2)
{
    
      if(l1==NULL && l2==NULL) return NULL;
        vector<int> v;
        int carry=0;
        
       while(l1!=NULL || l2!=NULL)
       {
           if(l1 && l2)
           {
               int s=(l1->val)+(l2->val)+carry;
               l1=l1->next;
               l2=l2->next;
               carry=0;

               if(s<=9)
               {
                   v.push_back(s);
               }
               else if(s>9)
               {
                   int d=s%10;
                   carry=1;
                   v.push_back(d);
               }
           }
           else if(l1!=NULL)
           {
               int s=l1->val+carry;
               l1=l1->next;
               carry=0;
               if(s<=9)
               {
                   v.push_back(s);
               }
               else if(s>9)
               {
                   int d=s%10;
                   carry =1;
                   v.push_back(d);
               }
           }
           else if(l2!=NULL)
           {
               int s=l2->val+carry;
               l2=l2->next;
               carry=0;
               if(s<=9)
               {
                   v.push_back(s);
               }
               else if(s>9)
               {
                   int d=s%10;
                   carry =1;
                   v.push_back(d);
               }
           }
       }
        if(carry==1)
        {
            v.push_back(carry);
        }
        node* res=create(v);
        return res;
        
        
}

node* add(node* l1,node* l2) //another approach more efficient in this approach I tried tor educe the if else blokcs
{
    node* ptr=new node();
    node* temp=ptr;
    int carry=0;

    while(l1!=NULL || l2!=NULL || carry)
    {
        int sum=0; 
        if(l1!=NULL)
        {
            sum+=l1->val;  //sum variable will be having the sum of both the values of l1 and l2 as well.
            l1=l1->next;
        }
        if(l2!=NULL)
        {
            sum+=l2->val;  //sum variable will be having the sum of both the values of l1 and l2 as well
            l2=l2->next;
        }
        
        sum=sum+carry;  //add carry to the sum;
        carry=sum/10;   // update carry after adding to the sum
        node* temp1=new node(sum%10);  //create linked list with the sum of both the linkedlist.
        temp->next=temp1;
        temp=temp->next;
    }
    return ptr->next;// retunn linkedlist if the l1 and l2 will be null then null will be returned as ptr->next will be null because
                        // if block will not be executed even once and otherwise the linkedlist will be returned.

}

int main()
{
    vector<int> v1{1,2,3};

    vector<int> v2{9,9,9,9};
    node* l1=create(v1);
    node* l2=create(v2);
   // node* r=addTwoNumbers(l1,l2);
    node* r=add(l1,l2);
   // cout<<" number after final reversal : ";
    while(r!=NULL)
    {
        cout<<r->val;
        r=r->next;
    }


}
