
class Solution {
public:
void helper(TreeNode * root, int level , vector<int>&ans){
    if(root==NULL)return;
    if(level==ans.size())ans.push_back(root->val);
    helper(root->left , level+1,ans);
    helper(root->right, level+1, ans);
}
    int findBottomLeftValue(TreeNode* root) {
        vector<int>ans;
        helper(root,0,ans);
        
        return ans[ans.size()-1];
    }
};