
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (isBadVersion(mid)) {
                high = mid;      // First bad version left side me ho sakta hai
            } else {
                low = mid + 1;   // Bad version right side me hoga
            }
        }

        return low;
    }
};