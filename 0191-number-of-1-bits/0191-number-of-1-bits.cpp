class Solution {
public:
    int hammingWeight(int n) {
        int cnt=0;
        while(n>0){
            int lastbits=n&1;
            cnt+=lastbits;
            n>>=1;
        }
        return cnt;
    }
};