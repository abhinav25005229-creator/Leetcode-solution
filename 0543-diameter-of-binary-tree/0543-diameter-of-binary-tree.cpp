
class Solution {
public:
    int levels(TreeNode * root){
        if(root==NULL)return 0;
        return 1+max(levels(root->left) , levels(root->right));
    }
    void helper(TreeNode * root,int &maxDiameter ){
        if(root==NULL)return ;
        int dia = levels(root->left) + levels(root->right);
        maxDiameter = max(maxDiameter, dia);
        /// for each node i have to find dia 
        helper(root->left,maxDiameter);
        helper(root->right, maxDiameter);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter = 0;
        helper(root , maxDiameter);
        return maxDiameter;
    }
};