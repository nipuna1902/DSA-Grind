class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int,double>>> adj(n);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            double w=succProb[i];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        vector<double> prob(n,0.0);
        prob[start_node]=1.0;
        priority_queue<pair<double,int>> pq;
        pq.push({1.0,start_node});
        while(!pq.empty()){
            auto[p,node]=pq.top();
            pq.pop();
            if(node==end_node)
            return p;
            if(p<prob[node])
            continue;
            for(auto[nxt,wt]:adj[node]){
                double newProb=p*wt;
                if(newProb>prob[nxt]){
                    prob[nxt]=newProb;
                    pq.push({newProb,nxt});
                }
            }
        }
        return 0.0;
    }
};