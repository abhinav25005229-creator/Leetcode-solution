class Solution {
public:
bool linear(vector<int> &arr,int key){
    bool ans=false;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==key){
            ans=true;
        }
    }
    return ans;
}
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;int n= nums.size();
        sort(nums.begin(),nums.end());
        int small = nums[0];int large= nums[n-1];

        for(int i=small; i<=large; i++){
           if(linear(nums,i)==false)ans.push_back(i);
        }
        return ans;
    }
};