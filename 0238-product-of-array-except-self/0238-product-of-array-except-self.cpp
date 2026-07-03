class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans(n,1);
        // vector<int> prefix(n,1);
        // vector<int>suffix(n,1);
        int suffix=1;


    for(int i=1; i<n; i++){
        ans[i] = ans[i-1]*nums[i-1];
    }
    for(int i=n-2; i>=0; i--){
        suffix *=nums[i+1];
        ans[i]*=suffix;
        // suffix[i] = suffix[i+1]*nums[i+1];
    }
    // for(int i=0; i<n; i++){
    //     ans[i] = prefix[i] * suffix[i];
   // }








        ///////// tle error ///////////////////////////
        // for(int i=0; i<nums.size();i++){
        //     int prod=1;
        //     for(int j=0; j<nums.size(); j++){
        //         if(i!=j)prod*=nums[j];
            
            
       
        return ans;
        
    }
};