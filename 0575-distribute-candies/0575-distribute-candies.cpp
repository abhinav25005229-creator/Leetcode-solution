class Solution {
public:
    int distributeCandies(vector<int>& candy) {
        unordered_set<int>s;
        for(int x:candy)s.insert(x);
        int type=s.size();
        int n=candy.size();
        return min(n/2,type);
    }
};