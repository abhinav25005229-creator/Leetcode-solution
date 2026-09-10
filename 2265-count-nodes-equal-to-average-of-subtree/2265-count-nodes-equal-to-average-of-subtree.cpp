
class Solution {
public:
int sumo(TreeNode* root){
    if(root==NULL)return 0;
    return root->val+sumo(root->left)+sumo(root->right);
}
int noofnodes(TreeNode * root){
    if(root==NULL)return 0;
   
   
    return 1+noofnodes(root->left)+noofnodes(root->right);
}
int count=0;
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL)return 0;
       int ele = root->val;
       int n=noofnodes(root);
       int sum=sumo(root);
       int avg=sum/n;
       if(avg==ele)count++;
       averageOfSubtree(root->left);
       averageOfSubtree(root->right);
       return count;
    }
};