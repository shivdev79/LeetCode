class Solution {
public:
    int countNegatives(vector<vector<int>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        vector <int> ans;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] < 0){
                    ans.push_back(grid[i][j]);
                }
            }
        }
        int s = ans.size();
        return s;
    }
};