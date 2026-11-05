class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string ans="";
        for(char ch: s){
            if(!st.empty() && tolower(st.top())==tolower(ch) && st.top()!=ch)st.pop();
          
          else  st.push(ch);

        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};