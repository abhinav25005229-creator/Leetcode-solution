class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
       bool ans=false;
       unordered_set<int>s;
       for(int i=0; i<nums.size(); i++){
        s.insert(nums[i]);
       }
       int i=0;
       while(ans!=true){
       i++;
        if(s.find(k*i)==s.end()){
            ans=true;
        }
        
        
       }
       return k*i;
       
    }
};