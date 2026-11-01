class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         vector<int>ans;
         unordered_map<int ,int>m;
         for(int i=0; i<nums.size(); i++){
                m[nums[i]]++;
         }
         for(int x: nums){
            if(m[x]==1)ans.push_back(x);
         }
         return ans;
    }
};