class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int l=0;  int count=0;double sum=0;double ans=-1e18;
        for(int r=0; r<arr.size();r++){
            sum+=arr[r];
            if(r-l+1==k){
                double avg=sum/k;
                ans=max(ans,avg);
                if(avg>=threshold)count++;
                sum-=arr[l];
                l++;
            }
        }
        return count;
    }
};