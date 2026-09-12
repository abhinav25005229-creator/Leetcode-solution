class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
        int ans=-1;
        for(auto p: m){
            if(p.second>1){
                ans=p.first;
                break;
            }
        }
        return ans;
    }
};