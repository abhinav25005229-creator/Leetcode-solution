class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int left=0;
        double sum=0;
        double ans =-1e18;
        for(int right=0; right<arr.size(); right++){
            sum+=arr[right];
            if(right-left+1==k){
                    ans=max(ans,sum/k);
                    sum-=arr[left];
                    left++;
            }
        }
        return ans;
    }
};