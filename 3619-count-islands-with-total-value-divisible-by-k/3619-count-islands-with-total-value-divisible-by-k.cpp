class Solution {
public:
    int count=0;
    void dfs(vector<vector<int>>& grid,vector<vector<bool>>& visited,int i,int j,int k,long long& sum){
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0 || visited[i][j]){
            return;
        }
        visited[i][j]=true;
        sum+=grid[i][j];
        dfs(grid,visited,i+1,j,k,sum);
        dfs(grid,visited,i-1,j,k,sum);
        dfs(grid,visited,i,j+1,k,sum);
        dfs(grid,visited,i,j-1,k,sum);
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (grid[i][j]!=0 && !visited[i][j]){
                    long long sum=0;
                    dfs(grid,visited,i,j,k,sum);
                    if(sum%k==0){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};