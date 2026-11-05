class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0;
        int ans=0;
        int zero=0;
        for(int r=0; r<nums.size(); r++){
            if(nums[r]==0)zero++;
            while(zero>1){
                if(nums[l]==0)zero--;
                l++;
            }
            //// we have to delete 1 element that is mandatory so 
            ans = max(ans, r-l);
        }
        return ans;
    }
};