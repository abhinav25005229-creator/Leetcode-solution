
class Solution {
public:
bool helper(TreeNode * root, int target,int sum){
    if(root==NULL)return false;
     sum+=root->val;
    if(root->left==NULL && root->right==NULL){
        return sum==target;
    }

   
   return helper(root->left, target,sum)|| helper(root->right,target,sum);


    
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return false;
        int sum=0;
        return  helper(root, targetSum,sum);
        
    }
};