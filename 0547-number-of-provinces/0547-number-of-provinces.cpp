class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adjLs(n);
        vector <int> visited(n);
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++ ){
                if(isConnected[i][j] == 1){
                    adjLs[i].push_back(j);
                }
            }
        }
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(!visited[i]){
                cnt = cnt + 1;
                dfs(i, adjLs , visited );
            }
        }
        return cnt;
    }
    void dfs(int node ,vector<vector<int>>& adjLs, vector <int> &visited ){
        visited[node] = 1;
        for(int nbr : adjLs[node]){
            if(!visited[nbr]){
            dfs(nbr , adjLs , visited);
            }
        }
    }
};