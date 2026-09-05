class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int n=nums.size();
        vector<int>prefixMAX(n);
         vector< int>suffixMIN(n);
        
       ///////prefixMAX[i]    0 → i ka maximum
        //////suffixMIN[i]     i → n-1 ka minimum
       prefixMAX[0] = nums[0];
       suffixMIN[n-1] = nums[n-1];
        for(int i=1; i<n; i++){
                prefixMAX[i] = max(prefixMAX[i-1],nums[i]);
            }

            for(int i=n-2; i>=0; i--){
                suffixMIN[i]=min(suffixMIN[i+1],nums[i]);
            }

            for(int i=0; i<n; i++){
                if((long long)prefixMAX[i]-suffixMIN[i]<=k)return i;
            }
        

            
        
        return -1;
    }
};