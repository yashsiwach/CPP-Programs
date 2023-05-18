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
        this->left=left;
        this->right=right;   
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
    //s
}
void topview(node*root)
{
    if(root==NULL) return ;
    map<int ,int>topnode;

    queue<pair<node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<node*,int>temp=q.front();
        q.pop();
        
        node*frontnode=temp.first;
        int hd=temp.second;
        
        if(topnode.find(hd)==topnode.end())
        {
            topnode[hd]=frontnode->val;
        }
        if(frontnode->left)
        {
            q.push(make_pair(frontnode->left,hd-1));
        }
        if(frontnode->right)
        {
            q.push(make_pair(frontnode->right,hd+1));
        }
    }
    for(auto it:topnode)
    {
        cout<<it.first<<" "<<it.second<<endl;
    } 
} 
int main()
{
    node*root=buildtree(root);
    topview(root);

}