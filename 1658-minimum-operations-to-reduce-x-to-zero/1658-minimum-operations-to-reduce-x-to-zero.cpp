class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int l=0; int sum=0;int ans=-1;
        int total=0;
        for(int x:nums)total+=x;
        int target=total-x;
        if(target<0)return -1;
        for(int r=0; r<nums.size(); r++){
            sum+=nums[r];
            while(sum>target){
                sum-=nums[l];
                l++;
            }
            if(sum==target)
            ans=max(ans,r-l+1);
        }
        if(ans==-1)return -1;
        return nums.size()-ans;
    }
};