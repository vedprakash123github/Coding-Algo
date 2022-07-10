#include<iostream>
#include<queue>
#include<utility>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;
};

int MaxWidth(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    queue<pair<node*, int>> q;
    q.push({root,0});
    int max_width=0;
    while(!q.empty())
    {
        int m_id=q.front().second;
        int sz=q.size();
        int frst=0,last=0;
        for(int i=0;i<sz;i++)
        {
            int curr_id=q.front().second-m_id;
            node* temp=q.front().first;  
            q.pop();
            if(temp->left != NULL) q.push({temp->left, (2*curr_id+1)});
            if(temp->right != NULL) q.push({temp->right, (2*curr_id+2)});
            if(i==0) frst=curr_id;
            if(i==sz-1) last=curr_id;
         }

        max_width=max(max_width,last-frst+1);
     }
     return max_width;
}