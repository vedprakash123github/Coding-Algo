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
int checkHeight(node* root, int& diameter)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=checkHeight(root->left,diameter);
    int r=checkHeight(root->right,diameter);
    diameter=max(l+r,diameter);
    return 1+max(l,r);
}
int BinaryTreeDiameter(node* root)
{
    int diameter=0;
    int r=checkHeight(root,diameter);
    return diameter;
}

int main()
{
    node* root=new node(10);
    node* level1left=new node(14);
    root->left=level1left;
    node* level1right= new node(33);
    root->right=level1right;
    node* level2left= new node(23);
    level1left->left=level2left;
    cout<<BinaryTreeDiameter(root);
}