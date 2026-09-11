class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int l=0; long long  sum=0;long long ans=0;int distinct=0;
        vector<int>freq(100001,0);
        for(int r=0; r<nums.size(); r++){
                sum+=nums[r];
                if(freq[nums[r]]==0)distinct++;
                freq[nums[r]]++;

            if(r-l+1==k){
                if(distinct==k)
                ans=max(ans,sum);
                if(freq[nums[l]]==1)distinct--;

                freq[nums[l]]--;
                sum-=nums[l];
                l++;
            }

        }
        return ans;
    }
};