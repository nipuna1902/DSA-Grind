class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<double> prob(n,0.0);
        prob[start_node]=1.0;
        for(int i=0;i<n-1;i++){
            bool changed=false;
            for(int j=0;j<edges.size();j++){
                int u=edges[j][0];
                int v=edges[j][1];
                double w=succProb[j];
                if(prob[u]*w>prob[v]){
                    prob[v]=prob[u]*w;
                    changed=true;
                }
                if(prob[v]*w>prob[u]){
                    prob[u]=prob[v]*w;
                    changed=true;
                }
            }
            if(!changed)
            break;
        }
        return prob[end_node];
    }
};