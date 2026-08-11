class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m= grid[0].size();
        int ans=0;

        vector<vector<bool>>vis(n,vector<bool>(m,false));
        queue<pair<pair<int, int> ,int>>q;////((i,j),time)
        /// pushing alll rotten orenges in queue
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=true;
                }
            }
        }

        ///bfs
        while(q.size()>0){
            int i=q.front().first.first;
            int j= q.front().first.second;
            int time= q.front().second;
            q.pop();

            ans = max(ans, time);

            /// neighbours
            if(i-1>=0 && grid[i-1][j]==1 && !vis[i-1][j]){///// top 
                vis[i-1][j]=true;
                q.push({{i-1, j},time+1});
            }
             if(i+1<n && grid[i+1][j]==1 && !vis[i+1][j]){/// bottom 
                vis[i+1][j]=true;
                q.push({{i+1, j},time+1});
            }
             if(j-1>=0 && grid[i][j-1]==1 && !vis[i][j-1]){///left 
                vis[i][j-1]=true;
                q.push({{i, j-1},time+1});
            }
             if(j+1<m && grid[i][j+1]==1 && !vis[i][j+1]){///right
                vis[i][j+1]=true;
                q.push({{i, j+1},time+1});
            }
        }
        ///// checking for fresh
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1 && !vis[i][j])return -1;
            }
        }
        return ans;
    }
};