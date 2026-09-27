/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * Head= new ListNode(0);
        ListNode * t = Head;
        while(head!=NULL){
            if(val!=head->val){
                t->next = new ListNode(head->val);
                t=t->next;
            }
            head= head->next;
        }
        return Head->next;
    }
};