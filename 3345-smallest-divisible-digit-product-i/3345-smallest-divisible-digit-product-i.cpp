class Solution {
public:
int digitprod(int n){
    int prod=1;
    while(n>0){
        prod*=n%10;
        n/=10;
    }
    return prod;
}
    int smallestNumber(int n, int t) {
            
        while(1){
            int x=digitprod(n);
            if(x%t==0){
               break;
            }else n++;
        }
        return n;
    }
};