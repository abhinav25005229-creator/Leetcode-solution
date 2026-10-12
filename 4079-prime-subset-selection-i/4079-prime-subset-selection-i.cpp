class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<bool>prime(n+1,true);
        prime[0]=false,prime[1]=false;
        for(int i=2; i*i<=n; i++){
            if(prime[i]==true){
                for(int j=i*i; j<=n; j+=i){
                    prime[j]=false;
                }
            }
        }
        vector<int>ans;int sum=0;
        for(int i=2; i<=n; i++){
            if(prime[i]==true && sum+i<=s ){
                sum+=i;
                ans.push_back(i);
            }
        }
        return ans;
    }
};