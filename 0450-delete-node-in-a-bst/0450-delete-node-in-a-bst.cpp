class Solution {
public:
TreeNode * findpred(TreeNode * root){
    if(root->left==NULL)return NULL;
    TreeNode * pred= root->left;
    while(pred->right!=NULL){
        pred=pred->right;
    }
    return pred;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key){
            // case1: No child
            if(root->left==NULL&& root->right==NULL)return NULL;

            // case 2: 1 child
             if(root->left==NULL || root->right==NULL){
                if(root->left!=NULL)return root->left;
                else return root->right;
             }
             //// case 3:  2 child 
             if(root->left!=NULL || root->right!=NULL){
                TreeNode * pred =findpred(root);
                /// imp : predeccessor has always either 0 child or 1 child
                ///// imp : pred ka right kabhi exist nhi nhi karega so ab jise delete karna h wo left me hi hoga 
                /// replacing
                root->val = pred->val;
                ///// imp : pred ka right kabhi exist nhi nhi karega so ab jise delete karna h wo left me hi hoga 
                root->left = deleteNode(root->left, pred->val);
        }
    }else if(root->val>key){
        root->left=deleteNode(root->left, key);
    } else{
        root->right= deleteNode(root->right, key);
    }
    return root;
    }
};