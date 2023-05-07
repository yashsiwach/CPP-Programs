/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int depth(TreeNode* root)
    {
        if(root==nullptr) return 0;
        int left=depth(root->left);
        int rigth=depth(root->right);
        return max(left,rigth)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int opt1=diameterOfBinaryTree(root->left);
        int opt2=diameterOfBinaryTree(root->right);
        int opt3=depth(root->left)+1+depth(root->right)-1;
        return max(opt1,max(opt2,opt3));
    }
};