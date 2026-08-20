class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n= nums.size();
        bool isincresing=true;
        bool isdecreasing = true;

        for(int i=1; i<n; i++){
            if(nums[i]>nums[i-1])isincresing = false;

            else if(nums[i]<nums[i-1])isdecreasing=false;
        }
        return isdecreasing||isincresing;

    }
};