
class Solution {
public:

    void dfs(TreeNode* root, vector<int>&ans, int level){
        if(root==NULL)return;
        if(level==ans.size()){
            ans.push_back(root->val);
        }
        dfs(root->right, ans,level+1);
        dfs(root->left, ans, level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
       dfs(root, ans, 0 );
        return ans;
    }
};