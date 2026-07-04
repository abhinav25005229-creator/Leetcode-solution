
class Solution {
public:
TreeNode* build(vector<int>& pre, int prelow,int prehigh, vector<int>& in, int inlow, int inhigh){
    if(prelow>prehigh)return NULL;
  
    TreeNode * root=new TreeNode(pre[prelow]);
      if(prelow==prehigh)return root;
    int i=inlow;
    while(i<=inhigh){
        if(in[i]==pre[prelow])break;
        i++;
    }
    int leftcount=i-inlow;
    int righcount=inhigh-i;
    root->left=build(pre,prelow+1,prelow+leftcount,in,inlow,i-1);
    root->right = build(pre,prelow+leftcount+1,prehigh,in, i+1, inhigh);
    return root;
}
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n= pre.size();
        return build(pre,0,n-1,in,0, n-1);
    }
};