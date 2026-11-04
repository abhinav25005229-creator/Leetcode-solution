class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>m;
        for(char c: s)m[c]++;
        string str="";
        priority_queue<pair<int,char>>pq;
        
        for(auto p: m){
            
        pq.push({p.second,p.first});
            
           
        }
        while(!pq.empty()){
            auto p = pq.top();
            pq.pop();

            //////// string(int,char)    Repeat the character p.first times

            str+=string(p.first,p.second);
        }
        return str;
    }
};