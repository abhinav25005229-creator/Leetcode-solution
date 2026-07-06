
class Solution {
public:
void  sumrange(TreeNode * root, int low, int high,int  & sum){
    if(root==NULL)return;

    if(root->val>=low && root->val<=high){sum+=root->val;}
     sumrange(root->left,low,high,sum);
     sumrange(root->right, low, high,sum);
    
    
}
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        sumrange(root, low, high,sum);
         return sum;
    }
};