class Solution {
public:
string check(string s){
     stack<char>st;int n= s.length();
     for(int i=0; i<n; i++){
        if(s[i]=='#'){
            if(!st.empty())st.pop();
           
        }
        else st.push(s[i]);
     }
     string ans="";
     while(st.size()>0){
ans+=st.top();
st.pop();
     }
     reverse(ans.begin(),ans.end());
     return ans;
}
    bool backspaceCompare(string s, string t) {
       if(check(s)==check(t))return true;
       return false;


    }
};