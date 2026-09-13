class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int n= nums.size();
        if(n==0|| n==1)return 0;
       if(n==2){
        if(nums[0]>nums[1])return 0;
        else return 1;
       }
     int maxi=0;
        for(int i=1; i<nums.size()-1; i++){
            if(nums[i-1]<nums[i] && nums[i]>nums[i+1]){
               maxi=i;
               break;
            }
        }
        if(nums[n-1]>nums[n-2])return n-1;
        return maxi;
    }
};