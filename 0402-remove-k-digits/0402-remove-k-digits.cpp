class Solution {
public:
    string removeKdigits(string num, int k) {
       string st;
        string s="";
        if(num.length()==1 && k>=1){
            return "0";
        }
        
        for(int i=0; i<num.length(); i++){
            while(st.size()>0 && st.back()>num[i]&& k>0){
                st.pop_back();
                k--;
            }
            st.push_back(num[i]);
        }
        while(k>0){
            st.pop_back();
            k--;
        }
        while(st.size()>0){
            s+=st.back();
            st.pop_back();
        }
           reverse(s.begin(),s.end());
        int i=0;
        while(i<s.size() && s[i]=='0'){
            i++;
        }
     if(i==s.size())return "0";

       return s.substr(i);
       

    }
};