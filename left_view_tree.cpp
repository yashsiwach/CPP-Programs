#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node*left;
    node*right;
    node(int val )
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;   
    }
};
node* buildtree(node*root)
{
    int val;
    cin>>val;
    root=new node(val);
    if(val==-1)
    {
        return nullptr ;
    }
    else
    {
        root->left=buildtree(root->left);
        root->right=buildtree(root->right);
        return root;
    }
}
void leftprint(node*root,vector<int>&ans,int level)
{
    if(root==nullptr)
    {
        return ;
    }
    if(ans.size()==level)
    {
        ans.push_back(root->val);
    }
    leftprint(root->left,ans,level+1);
    leftprint(root->right,ans,level+1);
}
int main()
{
    node*root=buildtree(root);
    vector<int>ans;
    
    leftprint(root,ans,0);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }

}
//10 20 30 -1 -1 40 60 -1 -1 -1 80 50 -1 70 -1 -1 90 -1 -1
//input