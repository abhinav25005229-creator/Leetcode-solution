class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool odd=false,even = false;
        int mini= INT_MAX;
        for(int x: nums1){
            mini = min(mini, x);
        }
        for(int x: nums1){
            if(x%2==0)even = true;
            else odd = true;
        }
        /// saare even ya saare odd check 

        if(!even||!odd)return true;
             
             //// agar mini even h  nums1[i] - nums1[j] >= 1 ye opetation false ho jayega 
             if(mini%2==0){
                return false;
             }
             return true;

    }
};