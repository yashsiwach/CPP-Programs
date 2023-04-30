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
void levelordertreversal(node*root)
{
    queue<node*>jat;
    jat.push(root);
    jat.push(NULL);
    while(!jat.empty())
    {
        node* temp=jat.front();
       
        jat.pop();
        if(temp==NULL) 
        {
            cout<<endl;
            if(!jat.empty())
            {
                jat.push(NULL);
            }
        }
        else 
        {
             cout<<temp->data<<" ";
                    if(temp->left)
        {
            jat.push(temp->left);
        }
        if(temp->right){
            jat.push(temp->right);
        }
        }

    }
}
void inorder(node*root)
{
    if(root==NULL)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node*root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*root)
{
    if(root==NULL)
    {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}
int main()
{
    //5 4 2 -1 4 -1 -1 -1 6 -1 4 -1 -1
    node*root=NULL;
    root=buildtree(root);
    cout<<"level starts"<<endl;
    levelordertreversal(root);
    cout<<endl;
    cout<<"inorder "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"preorder "<<endl;
    
    preorder(root);
    cout<<endl;
    cout<<"postorder "<<endl;
    postorder(root);
}
