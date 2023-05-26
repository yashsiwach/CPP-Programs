#include<bits/stdc++.h>
using namespace std;
class node
{
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
node* insertbst(node* root, int val)
{
    if(root == nullptr)
    {
        root = new node(val);
        return root;
    }   

    if(root->val > val)
        root->left = insertbst(root->left, val);
    else
        root->right = insertbst(root->right, val);
    
    return root;
}


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
			cout<<temp->val<<endl;
			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);
		}
	}
}
void takeinput(node*&root)
{
	int val;
	cin>>val;
	while(val!=-1)
	{
		root=insertbst(root,val);
		cin>>val;
	}
}
int main()
{
	node*root=NULL;
	cout<<"Enter the Data"<<endl;
	takeinput(root);
	cout<<"Print tree"<<endl;
	levelordertreversal(root);
}