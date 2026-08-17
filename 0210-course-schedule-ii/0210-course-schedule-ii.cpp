class Solution {
public:
    void topological(int src,vector<bool>&vis,stack<int> &s,vector<vector<int>>& prereq ){
        vis[src]=true;
        for(int i=0; i<prereq.size(); i++){
            int u=prereq[i][1];
            int v=prereq[i][0];
            if(u==src){
                if(!vis[v])topological(v,vis, s, prereq);
            }
        }
        s.push(src);
    }
    bool iscycle(int src,vector<bool> &vis,vector<bool> & rec, vector<vector<int>> & prereq){
        vis[src]=true;
        rec[src]=true;
        for(int i=0; i<prereq.size(); i++){
            int u=prereq[i][1];
            int v=prereq[i][0];
            if(u==src){
                if(!vis[v]){
                    if(iscycle(v,vis,rec,prereq))return true;
                }else if(rec[v])return true;
            }
        }
        rec[src] = false;
        return false;

    }
    vector<int> findOrder(int n, vector<vector<int>>& prereq) {
        vector<bool>vis(n,false);
        vector<bool>recpath(n,false);
        vector<int>ans;
        //// checking cycle or not 
        for(int i=0; i<n; i++){
            if(!vis[i]){
                if(iscycle(i,vis,recpath,prereq))return ans;
            }
        }

        //// Topo order vector return 

        stack<int>s;
        vis.assign(n,false);
        for(int i=0; i<n;i++){
            if(!vis[i]){
                topological(i,vis,s,prereq);
            }
        }
        while(s.size()>0){
            ans.push_back(s.top());
            s.pop();

        }
        return ans;
    }
};