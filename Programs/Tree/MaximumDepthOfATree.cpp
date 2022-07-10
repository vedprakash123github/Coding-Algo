#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
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

int main()
{
    node* root=new node(5);
    node* lft=new node(10);
    node* rgt=new node(15);
    root->left=lft;
    root->right=rgt;
    node* level2left=new node(12);
    node* level2rgt= new node(14);
    lft->left=level2left;
    lft->right=level2rgt;
     cout<<maximumDepth(root);
   
}