class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s= to_string(num);
        int count=0;
        for(int i=0; i<=s.length()-k; i++){
            string str="";
            for(int j=i; j<i+k; j++){
                str+=s[j];
            }
            int x=stoi(str);
            if(x!=0 && num%x==0)count++;
        }
        return count;
    }
};