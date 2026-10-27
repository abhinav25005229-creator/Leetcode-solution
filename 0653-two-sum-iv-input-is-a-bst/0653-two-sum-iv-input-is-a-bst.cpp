/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
bool inorder(TreeNode* root,unordered_set<int>&m, int k){
    if(root==NULL)return false;
    int target = k- root->val;
    if(m.find(target)!=m.end())return true;
    m.insert(root->val);

    ///////search in lst or rst 
    return inorder(root->left,m,k)||inorder(root->right, m,k);
}
    bool findTarget(TreeNode* root, int k) {
       unordered_set<int>s;
       return inorder(root ,s,k);
    }
};