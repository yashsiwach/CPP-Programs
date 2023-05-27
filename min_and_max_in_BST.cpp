#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int val;
	node*left;
	node*right;
	node(int val)
	{
		this->val=val;
		this->left=NULL;
		this->right=NULL;
	}
};
node* bstbuild(node*&root,int val)
{
	if(root==NULL)
	{
		root=new node(val);
		return root;
	}
	if(root->val>val)
		root->left=bstbuild(root->left,val);
	else
		root->right=bstbuild(root->right,val);
	return root;
}
void takeinput(node*&root)
{
	int val;
	cin>>val;
	while(val!=-1)
	{
		bstbuild(root,val);
		cin>>val;
	}
}
int minvalue(node*root)
{
	node*temp=root;
	if(temp==NULL)
	{ 
		return -1;
	}
	while(temp->left!=NULL)
		temp=temp->left;
	return temp->val;
}
int maz(node*root)
{
	node*temp=root;
	if(temp==NULL)
		return -1;
	while(temp->right)
		temp=temp->right;
	return temp->val;
}
int main()
{
	node*root=NULL;
	takeinput(root);
	int z=minvalue(root);
	int y=maz(root);
	cout<<z<<" "<<y<<" "<<endl;
}