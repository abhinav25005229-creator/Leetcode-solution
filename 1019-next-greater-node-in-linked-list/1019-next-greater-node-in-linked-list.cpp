
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>arr;
        ListNode * temp = head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n= arr.size();
    stack<int>st;
    vector<int>ans(n,0);

    for(int i=n-1; i>=0 ;i--){
        while(st.size()>0 && st.top()<=arr[i])st.pop();
        if(st.size()>0)ans[i]=st.top();
        st.push(arr[i]);
        
    }
return ans;


    }
};