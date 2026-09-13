class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>m;
    for(int x: nums)m[x]++;
        for(auto x:m){
            if(x.second==1)return x.first;
        }
        return -1;
    }
};