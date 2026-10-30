
class Solution {
public:
void inorder(TreeNode * root, int  &mini, int &prev){
    if(root==NULL)return;
    inorder(root->left,mini, prev);
     
     mini = min(mini,abs(prev-root->val));
     prev= root->val;
     inorder(root->right, mini, prev);

}
    int minDiffInBST(TreeNode* root) {
        int min=INT_MAX;
        int prev=INT_MAX;
        inorder(root, min, prev);
return min;

    }
};