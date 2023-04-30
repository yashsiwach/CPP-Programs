#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node*left;
        node*right;
        node(int d)
        {
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};
node* buildtree(node* root)
{
    cout<<"enter the root "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"data to inset in left of "<<data<<endl;
    root->left=buildtree(root->left);
     cout<<"data to inset in right of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}
int main()
{
    node*root=NULL;
    root=buildtree(root);
}