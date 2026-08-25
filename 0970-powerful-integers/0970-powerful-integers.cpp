class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
         vector<int>ans; unordered_set<int>s;
         vector<int>a,b;
         int p=1;
         while(p<=bound){
            a.push_back(p);
            if(x==1)break;//// repeatition
            p*=x;
         }

         p=1;

         while(p<=bound){
            b.push_back(p);
            if(y==1)break;
            p*=y;
         }

        for(int numA: a){
            for(int numB: b){
                if(numA+numB<=bound)s.insert(numA+numB);
            }
        }
        for(auto ele: s){
            ans.push_back(ele);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};