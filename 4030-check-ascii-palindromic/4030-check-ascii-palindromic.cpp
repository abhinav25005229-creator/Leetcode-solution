class Solution {
public:
    string inttobin(int n){
        string bin="";
        //////8-bit binary representation 
        for (int i = 0; i < 8; i++) {
            bin+=char((n%2)+'0');
            n/=2;
        }
        reverse(bin.begin(),bin.end());
        return bin;
    }
    bool isPalindromic(string s) {

        string str="";
        for(char c:s){
            int ascii=(int)c;
            str+=inttobin(ascii);
        }
        string rev=str;
        reverse(rev.begin(),rev.end());
        return str==rev;
    }
};