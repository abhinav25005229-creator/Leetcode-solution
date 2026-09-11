class Solution {
public:
    int maxVowels(string s, int k) {
        int l=0; int count=0;int n=s.length();
        int ans=0;
        for(int r=0; r<n; r++){
            if(s[r]=='a'|| s[r]=='e'||s[r]=='i'||s[r]=='u'||s[r]=='o')count++;
            if(r-l+1==k){
               
                ans = max(ans,count);
                 if(s[l]=='a'|| s[l]=='e'||s[l]=='i'||s[l]=='u'||s[l]=='o')count--;
                l++;
            }
        }
        return ans;
    }
};