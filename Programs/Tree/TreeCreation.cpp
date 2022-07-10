#include<iostream>
#include<queue>
#include<vector>
#include<stack>
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
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}
void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
}

void levelOrder(node* root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* p=q.front();
        cout<<p->data<<endl;
        q.pop();
        q.push(p->left);
        q.push(p->right);
        
    }
}


vector<vector<int>> updatedlevelOrder(node* root)
{
    vector<vector<int>> ans;
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        vector<int> t;
        int sz=q.size();
        for(int i=0;i<sz;i++)
        {
            node* temp=q.front();
            q.pop();
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
            t.push_back(temp->data);
        }
        ans.push_back(t);
    }
    return ans;
}  

void iterativePreorder(node* root)
{
    stack<node*> st;
    st.push(root);
    while(!st.empty())
    {
        node* temp=st.top();
        cout<<temp->data<<endl;;
        st.pop();
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
    }
}

void iterativeInorder(node* root)
{
    stack<node*> st;
    node* temp=root;
    while(true)
    {
        if(temp!=NULL)
        {
            st.push(temp);
            temp=temp->left;
        }
        else
        {
            if(st.empty()==true) break;
            temp=st.top();
            st.pop();
            cout<<temp->data<<endl;
            temp=temp->right;
        }
    }
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
    inorder(root);
    cout<<" : :"<<endl;
    iterativeInorder(root);
   // preorder(root);
    //cout<<" : :"<<endl;
    //iterativePreorder(root);
   // postorder(root);
   // levelOrder(root);
   /*vector<vector<int>> res= updatedlevelOrder(root);
   for(int i=0;i<res.size();i++)
   {
       for(int j=0;j<res[i].size();j++)
       {
           cout<<res[i][j]<<" ";
       }
       cout<<endl;
   }*/
}
