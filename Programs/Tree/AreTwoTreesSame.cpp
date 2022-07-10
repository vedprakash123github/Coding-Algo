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
            this->data=x;
            left=NULL;
            right=NULL;

        }
};

bool isTreeSame(node* r1, node* r2)
{
    if(r1==NULL || r2==NULL)
    {
        return (r1==r2);
    }
    //return (r1->data==r2->data) && isSameTree(r1->left,r2->left) && isSameTree(r1->right,r2->right);
  /*  bool r1;
    if(r1->data==r2->data)
    {
        r1=true;
    }
    bool l=isSameTree(r1->left,r2->left);
    bool r=isSameTree(r1->right,r2->right);
    return r1 && l && r; */
}

int main()
{

}