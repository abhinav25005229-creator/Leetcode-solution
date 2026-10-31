class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,k=0;
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>ans;
        while(i<n1 && j<n2){
            if(nums1[i]>nums2[j]){
               ans.push_back(nums2[j++]);
            }else ans.push_back(nums1[i++]);
        }
        while(i<n1){
            ans.push_back(nums1[i++]);
        }
         while(j<n2){
            ans.push_back(nums2[j++]);
        }
        int n3= ans.size();
      
      double x;
        
        
            if(n3%2!=0)x=ans[n3/2];
            else x= (ans[n3/2]+ ans[n3/2-1])/2.0;
        
        return x;
    }
};