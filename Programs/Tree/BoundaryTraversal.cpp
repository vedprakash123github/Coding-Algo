#include<iostream>
#include<vector>
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
};
bool isLeaf(node* root)
{
    return !root->left && !root->right;
}

void leftBoundary(node* root, vector<int>& res)
{
    if(!root->left) return;
    node* cur=root->left;
    while(cur)
    {
        if(!isLeaf(cur))
        {
            res.push_back(cur->data);
        }
        if(cur->left)
        {
            cur=cur->left;
        }
        else
        {
            cur=cur->right;
        }
    }
}

void rightBoundary(node* root, vector<int>& res)
{
    vector<int> temp;
    if(!root->right) return;
    node* cur= root->right;
    while(cur)
    {
        if(!isLeaf(cur)) 
        {
            temp.push_back(cur->data);
        }
        if(cur->right)
        {
            cur=cur->right;
        }
        else
        {
            cur=cur->left;
        }
    }
    for(int i=temp.size()-1;i>=0;i++)
    {
        res.push_back(temp[i]);
    }
}

void leaf(node* root, vector<int>& res)
{
    if(isLeaf(root))
    {
        res.push_back(root->data);
        return;
    }
    if(root->Left) leaf(root->left);
    if(root->right) leaf(root->right);
}

vector<int> BoundaryTraversal(node* root)
{
    vector<int> res;
    if(!isLeaf(root))
    {
     res.push_back(root->data);
    }
    leftBoundary(root);
    leaf(root,res);
    rightBoundary(root,res);
}

int main()
{
    node* root;
   vector<int> r=BoundaryTraversal(root);
    

}