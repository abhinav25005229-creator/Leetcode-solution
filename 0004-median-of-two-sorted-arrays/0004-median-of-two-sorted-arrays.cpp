class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0; i<nums1.size(); i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        double answer=0;
        if(ans.size()%2!=0){
            int x=ans.size()/2;
           answer=(double)ans[x];
        }else{
            int x=ans.size()/2;
            int y=ans.size()/2-1;
          answer=  ((double)ans[x]+(double)ans[y])/2;
        }
        return answer;

    }
};