class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n=maze.size();
        int m=maze[0].size();
        int steps=0;
        queue<pair<int,int>> q;
        q.push({entrance[0],entrance[1]});
        maze[entrance[0]][entrance[1]]='+';
        int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            int size=q.size();
            steps++;
            while(size--){
                int x=q.front().first; 
                int y = q.front().second; 
                q.pop();
                for(int i=0;i<4;i++){
                    int nx=x+dir[i][0];
                    int ny=y+dir[i][1];
                    if(nx<0 || nx>=n || ny<0 ||ny>=m)
                    continue;
                    if(maze[nx][ny]=='+')
                    continue;
                    if(nx==0||ny==0||nx==n-1||ny==m-1)
                    return steps;
                    maze[nx][ny]='+';
                    q.push({nx,ny});
                }
            }
        }
        return -1;
    }
};