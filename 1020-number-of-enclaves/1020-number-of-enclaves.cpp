class Solution {
public:
    void dfs(vector<vector<int>>& grid,int row,int col){
        int n=grid.size();
        int m=grid[0].size();
        if(row<0 || row>=n || col<0 || col>=m || grid[row][col] == 0)
        return;
        grid[row][col]=0;
        dfs(grid,row+1,col);
        dfs(grid,row-1,col);
        dfs(grid,row,col+1);
        dfs(grid,row,col-1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][0]==1)
            dfs(grid,i,0);
            if(grid[i][m-1]==1)
            dfs(grid,i,m-1);
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]==1)
            dfs(grid,0,i);
            if(grid[n-1][i]==1)
            dfs(grid,n-1,i);
        }
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                k++;
            }
        }
        return k;
    }
};