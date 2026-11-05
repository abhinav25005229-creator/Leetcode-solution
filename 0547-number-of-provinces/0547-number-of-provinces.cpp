class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int component=0;
        int v=isConnected.size();
        vector<bool>vis(v,false);
        for(int i=0; i<isConnected.size(); i++){
            if(!vis[i]){
                component++;
                queue<int>q;
                vis[i]= true;
                q.push(i);
                while(!q.empty()){
                    int curr = q.front();
                    q.pop();
                    for(int j=0; j<v; j++){
                        if(isConnected[curr][j]==1 && !vis[j]){
                            vis[j]=true;
                            q.push(j);
                        }
                    }
                }
            }
        }
        return component;
    }
};