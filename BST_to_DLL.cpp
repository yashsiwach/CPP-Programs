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
		this->left=nullptr;
		this->right=nullptr;
	}
};
node* inordertoBST(vector<int>jat,int s,int e)
{
	if(s>e)
		return nullptr;
	int mid=(s+e)/2;
	int ele=jat[mid];
	node* root=new node(ele);
	
	root->left=inordertoBST(jat,s,mid-1);
	root->right=inordertoBST(jat,mid+1,e);
	return root;
	
}
void dll(node*root,node*&head)
{
	if (root==nullptr)
		return ;
	dll(root->right,head);
	root->right=head;
	if(head!=NULL)
		head->left=root;
	head=root;
	dll(root->left,head);
}
void printll(node*head)
{
	node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->val<<endl;
		temp=temp->right;
	}
}
int main()
{
	vector<int>jat={1,2,3,4,5,6,7,8,9};
	int s=0,e=jat.size()-1;
	node* root=inordertoBST(jat,s,e);
	node*head=nullptr;
	dll(root,head);
	printll(head);
	
}