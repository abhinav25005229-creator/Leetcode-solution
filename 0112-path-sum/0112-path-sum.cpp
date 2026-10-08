
class Solution {
public:
void helper(TreeNode * root,int sum,int tar, bool &ans){
    if(root==NULL)return ;
    sum+=root->val;
    if(root->left==NULL && root->right==NULL){
        if(sum==tar)ans=true;
        return;
    }
    helper(root->left, sum,tar,ans);
    helper(root->right,sum,tar,ans);

}
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans=false;
        helper(root,0,targetSum ,ans );
        return ans;
    }
};