//////method 2:
class Solution {
public:
vector<int>v;
int idx=0;
void inorder(TreeNode *root){
    if(root==NULL)return;
    inorder(root->left);
    v.push_back(root->val);
    inorder(root->right);
}
void update(TreeNode * root){
    if(root==NULL)return;
    update(root->left);
    root->val=v[idx++];
    update(root->right);
}
    TreeNode* bstToGst(TreeNode* root) {
        inorder(root);
        for(int i=v.size()-2;i>=0; i--){
            v[i]=v[i]+v[i+1];
        }
        update(root);
return root;
    }
};