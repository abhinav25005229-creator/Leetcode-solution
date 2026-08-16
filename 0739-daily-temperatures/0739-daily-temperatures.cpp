class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int>s;
        int n=temp.size();
        vector<int>ans(n,0);
        for(int i=0; i<temp.size(); i++){
            while(s.size()>0 && temp[s.top()]<temp[i]){
                int prev = s.top(); s.pop();
                ans[prev] = i-prev;

            }

            /// pusing 
            s.push(i);
        }
        return ans;
    }
};