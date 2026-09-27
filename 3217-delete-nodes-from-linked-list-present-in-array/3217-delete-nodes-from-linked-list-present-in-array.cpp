
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>s(nums.begin(),nums.end());
        ListNode * Head =new ListNode(0);
        ListNode * t =Head;
        while(head!=NULL){
            if(s.find(head->val)==s.end()){
                t->next = new ListNode(head->val);
                t=t->next;
            }
            head=head->next;
        }
        return Head->next;
    }
};