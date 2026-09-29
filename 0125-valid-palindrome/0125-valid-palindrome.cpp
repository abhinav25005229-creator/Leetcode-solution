class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string str="";
        for(char ch:s){
            if(isalnum(ch))
            str+=ch;
        }
        string copy= str;
        reverse(copy.begin(),copy.end());
        return copy==str;

    }
};