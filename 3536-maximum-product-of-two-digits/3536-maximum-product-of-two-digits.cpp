class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;int temp=n;

        while(temp>0){
            ans.push_back(temp%10);
            temp/=10;
        }
        int a=0;
        for(int i=0; i<ans.size(); i++){
            for(int j=i+1; j<ans.size(); j++){
                a=max((ans[i]*ans[j]),a);
                
            }
        }
        return a;

    }
};