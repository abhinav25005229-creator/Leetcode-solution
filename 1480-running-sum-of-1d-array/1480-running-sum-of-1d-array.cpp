class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int sum=0;int n= arr.size();
        for(int i=0; i<n; i++){
            sum+=arr[i];
            arr[i]=sum;
        }
        return arr;
    }
};