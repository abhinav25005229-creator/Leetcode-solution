class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;///// store indies (maximum indices at front of deque)
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            /////////// remove the elemet that is out of window 
            while(!dq.empty() && dq.front()<=i-k)dq.pop_front();
            /////// remove the ele that is smaller or equal to the back ele
            while(!dq.empty() && nums[dq.back()]<=nums[i])dq.pop_back();

            ///////// store current index 
            dq.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};