class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long long ans=0;
       int n= nums.size();
       ///////////it find the median with sorting the entire array
       nth_element(nums.begin(), nums.begin()+n/2, nums.end());
       int median = nums[n/2];
       for(int x: nums){
        ans+=abs((long long)x-median);
       }
        return ans;
    }
};