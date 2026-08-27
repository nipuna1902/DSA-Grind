class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    count++;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    vis[i][j]=true;
                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        if(x-1>=0 && grid[x-1][y]=='1' && !vis[x-1][y]){
                            vis[x-1][y]=true;
                            q.push({x-1,y});
                        }
                        if(y+1<m && grid[x][y+1]=='1' && !vis[x][y+1]){
                            vis[x][y+1]=true;
                            q.push({x,y+1});
                        }
                        if(x+1<n && grid[x+1][y]=='1' && !vis[x+1][y]){
                            vis[x+1][y]=true;
                            q.push({x+1,y});
                        }
                        if(y - 1 >= 0 && grid[x][y-1] == '1' && !vis[x][y-1]) {
                            vis[x][y-1] = true;
                            q.push({x, y-1});
                        }
                    }
                }
            }
        }
        return count;
    }
};

// class Solution {
// public:
//     void dfs(vector<vector<char>>& grid,int r,int c){
//         if(r<0||c<0||r>=grid.size()||c>=grid[0].size()){
//             return;
//         }
//         if(grid[r][c]=='0')
//         return;
//         grid[r][c]='0';
//         dfs(grid,r-1,c);
//         dfs(grid,r+1,c);
//         dfs(grid,r,c-1);
//         dfs(grid,r,c+1);
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int count=0;
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[0].size();j++){
//                 if(grid[i][j]=='1'){
//                     count++;
//                     dfs(grid,i,j);
//                 }
//             }
//         }
//         return count;
//     }
// };