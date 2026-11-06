class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>m;
       
        for(int x:arr1)m[x]++;
        vector<int>ans;
        for(int x:arr2){
            while(m[x]>0){
                ans.push_back(x);
                m[x]--;
            }
        }
        for(auto p: m){
            while(p.second>0){ans.push_back(p.first);p.second--;}
        }
        return ans;
    }
};