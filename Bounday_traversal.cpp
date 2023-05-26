#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int val;
	node* left;
	node*right;
	node(int val)
	{
		this->val=val;
		this->left=NULL;
		this->right=NULL;
	}
};
node * buildtree(node*root)
{
	int val;
	cin>>val;
	root=new node(val);
	if(val==-1)
	{
		return nullptr;
	}
	else
	{
		root->left=buildtree(root->left);
		root->right=buildtree(root->right);
		return root;
	}
}
void leftview(node*root)
{
	if(root==NULL)
		return ;
	if(root->left==NULL&&root->right==NULL)
		return ;
	cout<<root->val<<" ";
	if(root->left)
		leftview(root->left);
	else
		leftview(root->right);
}
void leafview(node*root)
{
	if(root==nullptr)
		return;
	if(root->left==NULL&&root->right==NULL)
		cout<<root->val<<" ";
	
	leafview(root->left);
	leafview(root->right);
	
}
void rightview(node*root )
{
	if(root==nullptr) return ;
	if(root->right==NULL&&root->left==NULL)
		return;
	if(root->right)
		rightview(root->right);
	else
		rightview(root->left);
	cout<<root->val<<" ";
}
void buildboundary(node*root)
{
	if(root==nullptr)
		return ;
	leftview(root->left);
	leafview(root);
	rightview(root->right);
}
int main ()
{
	node* root=buildtree(root);
	buildboundary(root);	
}
