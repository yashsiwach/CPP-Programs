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
void levelordertreversal(node*root)
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		node*temp=q.front();
		q.pop();
		if(temp==NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			cout<<temp->val<<" ";
			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);
		}
	}
}
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
int main ()
{
	vector<int>jat={1,2,3,4,5,6,7,8,9};
	int s=0,e=jat.size()-1;
	node* root=inordertoBST(jat,s,e);
	levelordertreversal(root);
}