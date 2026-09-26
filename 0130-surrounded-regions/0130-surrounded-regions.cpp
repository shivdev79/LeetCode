class Solution {
public:
int drow[4] = {-1 , 0 , + 1 , 0};
int dcol[4] = {0, 1 , 0 , -1};
bool isvalid(int i , int j , int n , int m){
    if( i < 0 || j < 0 || i >= n || j >= m){
        return false;
    }
    return true;
}
void dfs(int i , int j ,vector<vector<char>>& board , int n , int m ){
    board[i][j] = '#';
    for(int k = 0 ; k < 4 ; k++){
        int row = i + drow[k];
        int col = j + dcol[k];
        if(isvalid(row , col , n , m) && board[row][col] == 'O'){
            dfs(row , col , board , n , m);
        }
    }
    return;
}

void solve(vector<vector<char>>& board) {
    int n = board.size();
    int m = board[0].size();
    for(int j = 0 ; j < m ; j++){
        if(board[0][j] == 'O'){
            dfs(0 , j , board , n , m);
        }
    }
    for(int j  = 0 ; j < m ; j++){
        if(board[n-1][j] == 'O'){
            dfs(n-1 , j , board , n , m);
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(board[i][0] == 'O'){
            dfs(i , 0 , board , n , m);
        }

    }
    for(int i = 0 ; i < n ; i++){
        if(board[i][m-1] == 'O'){
            dfs(i , m-1 , board , n , m);
        }
    }
    for(int i = 0 ;  i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(board[i][j] == '#'){
                board[i][j] = 'O';
            }
            else if(board[i][j] == 'O'){
                board[i][j] = 'X';
            }
        }
    }

    }
};