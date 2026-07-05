//////////// method 2:
class Solution {
public:
///////////// key point  -> inorder traversal of bst is sorted
    void inorder(TreeNode * root, vector<int> & arr){
        if(root==NULL)return;
        inorder(root->left, arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        for(int i=1; i<ans.size(); i++){
            if(ans[i]<=ans[i-1])return false;
        }
        return true;
    }
};