class Solution {
public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        for(int x : nums2) {
            nums1.push_back(x);
        }

        sort(nums1.begin(), nums1.end());

        int n = nums1.size();

        // Odd length
        if(n % 2 != 0) {
            return (double)nums1[n / 2];
        }

        // Even length
        int x = nums1[n / 2];
        int y = nums1[n / 2 - 1];

        return ((double)x + (double)y) / 2.0;
    }
};