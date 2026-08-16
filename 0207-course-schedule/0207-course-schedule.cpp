class Solution {
public:
bool iscycleDFS(int src, vector<bool>&vis,vector<bool> & recpath,vector<vector<int>>& graph ){
    vis[src]=true;
    recpath[src]=true;
    for(int v: graph[src]){
            if(!vis[v]){
                if(iscycleDFS(v,vis,recpath,graph))return true;
            }else if(recpath[v])return true;
        }
       
         
          //// backedge 
        recpath[src]=false;
        return false;
}
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(n);
        for(auto &p: prerequisites){
            int course = p[0];
            int prereq=p[1];
            graph[prereq].push_back(course);
        }

        vector<bool>vis(n,false);
        vector<bool>recpath(n,false);
        for(int i=0; i<n; i++){
            if(!vis[i]){
                if(iscycleDFS(i,vis, recpath,graph))return false;
            }
        }
        return true;
    }
};