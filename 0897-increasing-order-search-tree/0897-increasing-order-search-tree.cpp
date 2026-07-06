class Solution {
public:
void inorder(TreeNode * root, vector<int> & ans){
    if(root==NULL)return;
    inorder(root->left, ans);
    ans.push_back(root->val);
    inorder(root->right, ans);
}
    TreeNode* increasingBST(TreeNode* root) {
        vector<int >ans;
        inorder(root, ans);
        TreeNode * final = new TreeNode(ans[0]);
        TreeNode  * dummy=final;
        for(int i=1; i<ans.size(); i++){
            TreeNode * node =new TreeNode (ans[i]);
            dummy->right =node;
            dummy=dummy->right;

        }
        return final;
    }
    
};