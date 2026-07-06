class Solution {
public:
     TreeNode * final = new TreeNode(-1);
        TreeNode  * dummy=final;
void inorder(TreeNode * root){
    if(root==NULL)return;
    inorder(root->left);
    root->left=NULL;
    dummy->right= root;
    //////curr hamesha last node ko point kar rha h
    dummy= root;
    inorder(root->right);
}
    TreeNode* increasingBST(TreeNode* root) {

        inorder(root);
        return final->right;
    }
    
};