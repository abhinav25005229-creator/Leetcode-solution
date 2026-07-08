
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(root==NULL)return -1;
        vector<long long>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            long long sum=0;

            
            int size = q.size();
            while(size--){
                TreeNode * temp = q.front();q.pop();
                    sum+=temp->val;
                    if(temp->left)q.push(temp->left);
                    if(temp->right)q.push(temp->right);
            }
            ans.push_back(sum);

        }
        if(k>ans.size())return -1;
        sort(ans.begin(),ans.end(),greater<long long>());
        return ans[k-1];
    }
};