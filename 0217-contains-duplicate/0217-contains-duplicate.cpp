class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(int x: nums)m[x]++;
        for(auto p: m){
            if(p.second>1)return true;
        }
        return false;
    }
};