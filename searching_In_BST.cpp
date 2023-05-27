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

node* bstbuild(node*root,int val)
{
	if(root==NULL)
	{
		root=new node(val);
		return root;
	}	
	if(root->val>val)
	{
		root->left=bstbuild(root->left,val);
	}
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
		root=bstbuild(root,val);
		cin>>val;
	}
}
bool searching(node*root,int val)
{
	if(root==NULL)
		return false;
	if(root->val==val)
		return true;
	if(root->val>val)
	{
		return searching(root->left,val);
	}
	else
		return searching(root->right,val);
	
		
}
int main()
{
	node*root=NULL;
	takeinput(root);
	
	int a;
	cin>>a;
	bool ans=searching(root,a);
	cout<<ans;
}
