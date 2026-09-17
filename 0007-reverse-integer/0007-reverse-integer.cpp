class Solution {
public:
    int reverse(int n) {
        int sign =1;
        long long x=n;
        if(x<0){
            sign =-1;
            x=-x;
        }
        int temp = x;long long  rev=0;
        while(temp>0){
            int d=temp%10;
            rev=1LL*rev*10+d;
            temp/=10;
        }
        rev =  rev*sign;
        if(rev>=INT_MAX||rev<=INT_MIN)return 0;
        return (int)rev;
    }
};