class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector <int>> ans;
        int index ;
        int n = nums.size();
        solve( 0 , ans , nums , n);
        set<vector<int>> rs1(ans.begin() , ans.end());
        vector<vector<int>> ans3(rs1.begin() , rs1.end());
        return ans3;
    }
    void solve( int index , vector<vector <int>> &ans , vector<int> &nums , int n){
        if(index >= n){
            ans.push_back(nums);
            return ;
        }
         for(int i = index ; i <  nums.size() ; i++){
            swap(nums[index] , nums[i]);
            solve(index + 1 , ans , nums , n);
            swap(nums[index] , nums[i]);
         }

    }
};