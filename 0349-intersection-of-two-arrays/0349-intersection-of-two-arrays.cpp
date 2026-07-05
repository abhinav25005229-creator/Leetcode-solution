class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>mp;
        unordered_set<int>s;
        for(int i=0; i<nums1.size(); i++){
            mp[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++){
            if(mp.find(nums2[i])!=mp.end()){
                s.insert(nums2[i]);
            }
        }
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};