class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st; vector<int>ans;int n=prices.size();
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && prices[st.top()]>prices[i])st.pop();
            if(!st.empty()){
                ans.push_back(prices[i]-prices[st.top()]);
            }else {
                ans.push_back(prices[i]);
            }
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};