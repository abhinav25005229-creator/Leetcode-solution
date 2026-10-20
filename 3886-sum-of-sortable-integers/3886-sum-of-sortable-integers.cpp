class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int k=1; k<=n; k++){
            if(n%k!=0)continue;
            vector<int>b(n);
            bool ok=true;
            for(int s=0; s<n; s+=k){
                int drop=0;int start=0;
                for(int i=0; i<k; i++){
                    int curr = nums[s+i];
                    int next = nums[s+(i+1)%k];
                    if(curr>next){
                        drop++;
                        start = (i+1)%k;
                    }
                }
                if(drop>1){
                    ok=false;
                    break;
                }
                ////rotate the block 
                for(int i=0; i<k; i++){
                    b[s+i]=nums[s+(start+i)%k];
                }
          }
          if(!ok)continue;
          for(int i=0; i+1<n; i++){
            if(b[i]>b[i+1]){
                ok=false;break;
            }
          }
          if(ok)ans+=k;
        }
        return ans;
    }
};