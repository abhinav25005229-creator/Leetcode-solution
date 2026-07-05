class Solution {
public:
    int findLucky(vector<int>& nums) {
        unordered_map<int,int>mp;
        int largest=-1;
        for(int x:nums)mp[x]++;
        for(auto x: mp){
            if(x.second==x.first){
                largest =max(largest,x.first);
               
        }
        }
        return largest;
    }
};