class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {

        vector<vector<int>> dist(n, vector<int>(n, 1e9));

        // Distance to itself
        for(int i = 0; i < n; i++) {
            dist[i][i] = 0;
        }

        // Initialize edges
        for(auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];

            dist[u][v] = w;
            dist[v][u] = w;
        }

        // Floyd-Warshall
        for(int k = 0; k < n; k++) {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {

                    dist[i][j] = min(
                        dist[i][j],
                        dist[i][k] + dist[k][j]
                    );
                }
            }
        }

        int ans = -1;
        int mincount = INT_MAX;

        // Count reachable cities
        for(int i = 0; i < n; i++) {
            int count = 0;

            for(int j = 0; j < n; j++) {
                if(i != j && dist[i][j] <= distanceThreshold) {
                    count++;
                }
            }

            if(count <= mincount) {
                mincount = count;
                ans = i;
            }
        }

        return ans;
    }
};