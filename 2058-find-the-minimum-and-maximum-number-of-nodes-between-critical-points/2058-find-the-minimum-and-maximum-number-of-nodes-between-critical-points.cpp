
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode * prev=head;vector<int>ans;
        ListNode * curr = head->next;int n=0;int maxi=INT_MIN; int mini=INT_MAX;
        while(curr!=NULL && curr->next!=NULL){
            n++;
            if(curr->val>prev->val && curr->val>curr->next->val){
             ans.push_back(n);
              
                
            }
            if(curr->val<prev->val && curr->val<curr->next->val){
              ans.push_back(n);
            }
            prev= curr;
            curr = curr->next;

        }
         if (ans.size() < 2) {
            return {-1, -1};
        }

        for(int i=0; i<ans.size()-1; i++){
            mini = min(mini,ans[i+1]-ans[i]);
            
        }
        maxi = ans.back()-ans.front();
        return {mini, maxi};
    }
};