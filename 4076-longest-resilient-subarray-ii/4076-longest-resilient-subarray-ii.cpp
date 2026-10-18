class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
       int n= nums.size();
        vector<int>temp =nums;
        int ans=1;
        int i=0;
        while(i<n){
            int rem = temp[i]%k;
            int j=i;
            while(j<n && temp[j]%k==rem){
                j++;
            }
            int len= j-i;
            int p= k/gcd(rem,k);
            int length = 1+((len-1)/p)*p;
            ans=max(ans,length);
            i=j;
        }
        return ans;
    }
};