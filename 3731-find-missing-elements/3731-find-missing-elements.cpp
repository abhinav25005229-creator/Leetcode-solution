class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;int n= nums.size();
        sort(nums.begin(),nums.end());
        int small = nums[0];int large= nums[n-1];

        unordered_set<int>s;
        for(int x:nums)s.insert(x);

        for(int i=small; i<=large; i++){
            if(s.find(i)==s.end())ans.push_back(i);
        }
        return ans;
    }
};