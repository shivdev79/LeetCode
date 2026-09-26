class Solution {
public:
    vector<vector<int>> graph;

    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {

        // Special case
        if (n == 1) return 1.0;

        graph.resize(n + 1);

        // Build adjacency list
        for (auto &e : edges) {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }

        vector<bool> visited(n + 1, false);
        return dfs(1, t, target, visited);
    }

    double dfs(int node, int time, int target, vector<bool>& visited) {

        // If time is over OR node is a leaf (except root)
        if (time == 0 || (node != 1 && graph[node].size() == 1)) {
            return node == target ? 1.0 : 0.0;
        }

        visited[node] = true;

        double prob = 0.0;
        int choices = 0;

        for (int next : graph[node]) {
            if (!visited[next]) {
                choices++;
                prob += dfs(next, time - 1, target, visited);
            }
        }

        // No unvisited children
        if (choices == 0) return 0.0;

        return prob / choices;
    }
};
