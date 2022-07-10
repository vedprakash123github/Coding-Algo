#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;
};
 int maxPathSum(node* root, int& max_sum)
 {
     if(root==NULL)
     {
        return 0;
     }
     int l=maxPathSum(root->left,max_sum);
     int r=maxPathSum(root->right,max_sum);
     max_sum=max(max_sum, l+r+root->data);
     return root->data +max(l,r);

 }
