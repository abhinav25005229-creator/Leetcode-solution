class Solution {
public:
TreeNode * insert(TreeNode * root, int val){
    if(root==NULL)return new TreeNode(val);
    else if(root->val<val)root->right = insert(root->right, val);
    else root->left = insert(root->left ,val);
    return root;
}
    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode * root = new TreeNode(pre[0]);
        for(int i=1; i<pre.size(); i++){
            root = insert(root,pre[i]);
        }
        return root;
    }
};