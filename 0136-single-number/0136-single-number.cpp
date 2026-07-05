class Solution {
public:
    int singleNumber(vector<int>& arr) {
       unordered_map<int, int>mp;
       for(int x: arr)mp[x]++;
       for(auto p:mp){
        if(p.second==1)return p.first;
       }
       return -1;
    }
};