class Solution {
public:
long long reverse(long long n){
     long long  rev =0;
     while(n>0){
        int d= n%10;
        rev = rev*10+d;
        n/=10;
     }
     return rev;
}
    long long sumAndMultiply(int n) {
        long long sum=0;int temp=n;
        long long digit=0;
        while(temp>0){
            int d=temp%10;
            if(d>0){
                sum+=d;
                digit=digit*10+d;
               
            }
            temp/=10;
        }
    long long rev = reverse(digit);
        return (long long)sum*rev;

    }
};