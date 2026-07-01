class Solution {
public:
    int passwordStrength(string password) {
        int ans=0;
        set<char>s;
        for(char ch: password)s.insert(ch);
        string str="";
        for(auto ch: s)str+=ch;
        for(int i=0; i<str.size(); i++){
           char ch= str[i];
            if(ch>='a' && ch<='z')ans+=1;
            else if(ch>='A' && ch<='Z')ans+=2;
            else if(ch>='0' && ch<='9')ans+=3;
            else ans+=5;
            
        }
        return ans;
    }
};