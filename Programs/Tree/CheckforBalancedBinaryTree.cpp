#include<iostream>
using namespace std;

class node{
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

int checkHeight(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=checkHeight(root->left);
    if(lh==-1) return -1;
    int rh=checkHeight(root->right);
    if(rh== -1) return -1;

    if(abs(lh-rh)>1) return -1;
     
    return 1+max(lh,rh);

}

bool CheckBalanced(node* root)
{
    return checkHeight(root) != -1;
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
    
    cout<<CheckBalanced(root);
    

}