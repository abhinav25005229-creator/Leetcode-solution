
class Solution {
public:
    void inorder(TreeNode *root, vector<int>&v){

    if(root==NULL)return ;
    inorder(root->left, v);
    v.push_back(root->val);
    inorder(root->right, v);
    }
    bool findTarget(TreeNode* root, int k) {
    vector<int>a;
    inorder(root, a);
    int l=0; int h=a.size()-1;
    while(l<h){
        int sum=a[l]+a[h];
        if(sum==k)return true;
        if(sum<k)l++;
        else h--;
    }
    return false;
    }
};