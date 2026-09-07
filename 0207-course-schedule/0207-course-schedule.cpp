class Solution {
public:
    bool dfs(int course,vector<vector<int>>& graph,vector<int>& state){
        if(state[course]==1)
        return false;
        if(state[course]==2)
        return true;
        state[course]=1;
        for(int next:graph[course]){
            if(!dfs(next,graph,state))
            return false;
        }
        state[course]=2;
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        for(auto& p:prerequisites){
            int course=p[0];
            int prerequisites=p[1];
            graph[prerequisites].push_back(course);
        }
        vector<int> state(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(!dfs(i,graph,state))
            return false;
        }
        return true;
    }
};