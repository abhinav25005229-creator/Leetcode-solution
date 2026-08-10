class Solution {
public:
    long long  dectobinary(long long n){
        long  bin=0;long  pow=1;
        while(n>0){
            int d = n%2;
            bin+=d*pow;
            pow*=10;
            n/=2;
        }
        return bin;
    }
    bool consecutiveSetBits(int n) {
        long long  bin=dectobinary(n);
        vector<int>ans;
        while(bin>0){
            int d=bin%10;
            ans.push_back(d);
            bin/=10;
        }
        reverse(ans.begin(),ans.end());
        long long  count=0;
        for(int i=0; i+1<ans.size(); i++){
            if(ans[i]==1 && ans[i+1]==1)count++;
            if(count>1)return false;
        }
        return count==1;
    }
};