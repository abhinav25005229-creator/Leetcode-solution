class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        //////////////  Agar root hi p ya q hai, to wahi LCA hoga.
        if(root->val == p->val || root->val == q->val)
            return root;

        ////////// p aur q opposite sides me hain.
        ////////////// (p left me aur q right me)
        ////////////// Root hi Lowest Common Ancestor hai.
        else if(root->val < p->val && root->val > q->val)
            return root;

        //////////////// q left me aur p right me.
       ////////////////// Root hi Lowest Common Ancestor hai.
        else if(root->val > p->val && root->val < q->val)
            return root;

       //////////////////// Dono nodes right subtree me hain.
        ////////////////// To right subtree me LCA search karo.
        else if(root->val < p->val && root->val < q->val)
            return lowestCommonAncestor(root->right, p, q);

       ////////////////// Dono nodes left subtree me hain.
      ///////////////////To left subtree me LCA search karo.
        else
            return lowestCommonAncestor(root->left, p, q);
    }
};