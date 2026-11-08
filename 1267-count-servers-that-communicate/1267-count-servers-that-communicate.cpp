class Solution {
public:
    int dfs(vector<vector<int>>& grid,int r,int c,vector<vector<bool>>& vis){
        vis[r][c]=true;
        int cnt=1;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<col;i++){
            if(grid[r][i]==1 && !vis[r][i])
            cnt+=dfs(grid,r,i,vis);
        }
        for(int i=0;i<row;i++){
            if(grid[i][c]==1 && !vis[i][c])
            cnt+=dfs(grid,i,c,vis);
        }
        return cnt;
    }
    int countServers(vector<vector<int>>& grid) {
        int c=0;
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<bool>> vis(row,vector<bool>(col,false));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    int size=dfs(grid,i,j,vis);
                    if(size>1){
                        c+=size;
                    }
                }
            }
        }
        return c;
    }
};