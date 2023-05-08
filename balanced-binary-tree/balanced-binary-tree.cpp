class Solution {
public:
    int h(TreeNode*root)
    {
        if(root==NULL)return 0;
        int left=h(root->left);
        int right=h(root->right);
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        int left=h(root->left);
        int right=h(root->right);
        int diff=abs(left-right);
        bool ans=(diff<=1);
        bool lefft=isBalanced(root->left);
        bool rigght=isBalanced(root->right);
        if(ans&&lefft&&rigght) return true;
        else return false;
    }
};
