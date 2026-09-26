class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {

        const int INF = 10001;
        vector<vector<int>> dist(n, vector<int>(n, INF));

        // Initialize distances from edges
        for (auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            dist[u][v] = w;
            dist[v][u] = w;
        }

        // Distance to itself is 0
        for (int i = 0; i < n; i++) {
            dist[i][i] = 0;
        }

        // Floyd–Warshall algorithm
        for (int via = 0; via < n; via++) {
            for (int from = 0; from < n; from++) {
                for (int to = 0; to < n; to++) {
                    dist[from][to] = min(
                        dist[from][to],
                        dist[from][via] + dist[via][to]
                    );
                }
            }
        }

        int answerCity = 0;
        int minReachable = n;

        // Find city with minimum reachable cities
        for (int i = 0; i < n; i++) {
            int reachable = 0;
            for (int j = 0; j < n; j++) {
                if (dist[i][j] <= distanceThreshold) {
                    reachable++;
                }
            }

            // Tie → choose larger index
            if (reachable <= minReachable) {
                minReachable = reachable;
                answerCity = i;
            }
        }

        return answerCity;
    }
};
