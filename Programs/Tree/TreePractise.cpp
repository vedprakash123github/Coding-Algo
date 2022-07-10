#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;

        node(int x)
        {
            this->data=x;
            left=NULL;
            right=NULL;

        }
}*root;

void create()
{
    root= new node(10);
    node *lft= new node(5);
    node *rgt= new node(15);
    root->left=lft;
    root->right=rgt;
    node *level2left= new node(12);
    lft->left=level2left;
    node *level2right= new node(45);
    lft->right=level2right;
}
 void preOrder(node* rt)
 {
     if(rt ==NULL)
     {
         return;
     }
     cout<<rt->data<<endl;
     preOrder(rt->left);
     preOrder(rt->right);
 }

 void levelOrder()
 {
     queue<node*> q;
     q.push(root);
     while(!q.empty())
     {
         node* temp=q.front();
         cout<<temp->data<<endl;
         q.pop();
         if(temp->left!=NULL) q.push(temp->left);
         if(temp->right!=NULL) q.push(temp->right);
     }
 }

 int maximumDepth(node* root)
 {
     if(root==NULL)
     {
         return 0;
     }
     int l=maximumDepth(root->left);
     int r=maximumDepth(root->right);
     return 1+max(l,r);
 }
 int levelOrderMaximumDepth(node* root)
 {
     queue<node*> q;
     q.push(root);
     int cnt=0;
     while(!q.empty())
     {
         int size=q.size();
         cnt++;
         for(int i=0;i<size;i++)
         {
             node* temp=q.front();
             q.pop();
             if(temp->left!=NULL) q.push(temp->left);
             if(temp->right!=NULL) q.push(temp->right);
         }
     }
     return cnt;
 }

 int main()
 {
     create();
     //preOrder(root);
     //levelOrder();
     //cout<<maximumDepth(root);
     cout<<levelOrderMaximumDepth(root)<<endl;
 }