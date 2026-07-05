
class Solution {
public:
    bool validate(TreeNode * root, long long max, long long min){
        if(root==NULL)return true;
        ///// out of range conditiion
        if(root->val>=max || root->val<=min)return false;
        return validate(root->left, root->val,min)&& validate(root->right,max, root->val);
    }
    bool isValidBST(TreeNode* root) {
        return validate(root,LLONG_MAX,LLONG_MIN);
    }
};