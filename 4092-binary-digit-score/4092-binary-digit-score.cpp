class Solution {
public:
    int countsetbit(int n){
        int count=0;
        while(n>0){
            count+=n&1;
           n= n>>1;
        }
        return count;
    }
    int calculateScore(int a, int b) {
        int s1=countsetbit(a);
        int s2=countsetbit(b);
        return s1>=s2?(s1*s2):s2/s1;
    }
};