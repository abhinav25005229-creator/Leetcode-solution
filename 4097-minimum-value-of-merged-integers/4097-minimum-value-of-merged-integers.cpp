class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n= nums.size();
        
        if(n==2){
            string  s="";
            s+=to_string(nums[0]);
            s+=to_string(nums[1]);
            return stoi(s);
        }
        int mini=INT_MAX;
        for(int i=0; i<n-1; i+=2){
            string s="";
            s+=(to_string(nums[i])+to_string(nums[i+1]));
            mini = min(mini, stoi(s));
        }
        return mini;
       
    }
};