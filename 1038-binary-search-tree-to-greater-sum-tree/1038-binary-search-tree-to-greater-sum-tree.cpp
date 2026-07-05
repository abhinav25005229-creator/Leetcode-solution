
class Solution {
public:
///// algorithm   ->   reverse  inorder 
    void inorder(TreeNode *root, int& sum){
        if(root==NULL)return;
    //// right call first because greater value BST ke right me hi exist karta h 
        inorder(root->right,sum);
        sum+=root->val;
        root->val = sum;
        inorder(root->left,sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
       int sum=0;
        inorder(root,sum);
        return root;
    }
};