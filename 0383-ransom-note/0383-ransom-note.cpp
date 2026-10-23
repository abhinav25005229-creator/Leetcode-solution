class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length()>magazine.length())return false;
        unordered_map<char,int>v;;
        for( char ch: magazine){
            v[ch]++;
        }
        
        for(char ch: ransomNote){
            if(v[ch]>0){
                v[ch]--;
            }else{
                return false;
            }
        }
        return true;
    }
};