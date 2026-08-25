class Solution {
public:
    bool linear(vector<int>& nums, int key){
        bool ans=false;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==key)ans=true;
        }
        return ans;
    }
    int missingMultiple(vector<int>& nums, int k) {
       bool ans=false;
       unordered_set<int>s;
      
       int i=0;
       while(ans!=true){
       i++;
        if(linear(nums,k*i)!=true){
            ans=true;
        }
        
        
       }
       return k*i;
       
    }
};