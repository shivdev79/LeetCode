class Solution {
public:
int dp[2001][2001];
    int minCut(string s) {
        int n = s.size();
        memset(dp , -1 , sizeof(dp));
        return solve(s, 0 , n - 1);
    }
    int solve(string &s , int i , int j ){
        int left ; 
        int right;
        if(i>= j){
            return 0;
        }
        if(isPalindrome(s , i , j) == true){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int mn = INT_MAX;
        for(int k = i ; k <= j - 1 ; k++){
            if(isPalindrome(s, i , k)){
                if(dp[k+1][j]!= -1){
                right = dp[k+1][j];
            }
            else{
                right = solve(s , k+1 , j);
                dp[k+1][j] = right;
            }
            
            int tempans =  right + 1;
            mn = min(tempans , mn);
        }
        }
        return dp[i][j] = mn;
    }
    bool isPalindrome(string &s , int i , int j){
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};