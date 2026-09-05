
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
   vector<int>ans(n,0);
   for(int i=0; i<n; i++){
    
    for(int j=i+1; j<n; j++){
        if(arr[j]>arr[i]){
            ans[i] = arr[j];
            break;
        }
    }
   }
return ans;


    }
};