class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k=p.length();vector<int>ans;
       vector<int>freq1(26,0);
       vector<int>freq2(26,0);
       for(char c:p)freq1[c-'a']++;
       int l=0; 
       for(int r=0; r<s.length(); r++){
            freq2[s[r]-'a']++;
            if(r-l+1==k){
                if(freq1==freq2){
                    ans.push_back(l);
                }
                freq2[s[l]-'a']--;
                l++;
            }
       }
       return ans;
    }
};