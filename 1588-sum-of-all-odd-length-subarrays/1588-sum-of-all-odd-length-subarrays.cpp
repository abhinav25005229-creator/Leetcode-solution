class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int totalsum=0;
        int n= arr.size();
        for(int i=0; i<n; i++){
            int count=0;int sum=0;
            for(int j=i; j<n; j++){
                count++;
                sum+=arr[j];
                if(count%2==1){totalsum+=sum;}
            }
        }
        return totalsum;
    }
};