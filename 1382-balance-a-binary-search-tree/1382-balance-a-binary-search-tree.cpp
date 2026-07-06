class Solution {
public:
void inorder(TreeNode *root, vector<int> & ans){
    if(root==NULL)return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right, ans);
}
TreeNode * build(vector<int>&v, int low, int high){
   if(low>high)return NULL;
   int mid= low+(high-low)/2;
   TreeNode * root = new TreeNode(v[mid]);
   root->left = build(v,low, mid-1);
   root->right = build(v,mid+1, high);
   return root;

}
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
        inorder(root, ans);
       return  build(ans,0,ans.size()-1);
       

    }
};